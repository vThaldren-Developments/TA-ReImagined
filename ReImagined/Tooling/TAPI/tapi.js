const fs = require('fs');

var cache = {};

exports.makeCSV = function(target, format) { 
	if(typeof cache.hapiFolder == undefined || typeof cache.csvFolder == undefined || typeof cache.CSV_Delim == undefined) {
		console.log('improper init()!');
		return;
	}
	
	let target_path = cache.hapiFolder + '\\' + target;

	/*
		tapi.makeCSV(Zombean#6280);
		
		target = target folder containing tdf files
		format = .tdf / .gui / .fbi etc
		
	*/

	var files = readdirRecursive(target_path, format);
	var tdfObjs = [];

	files.forEach(function(file){
		tdfObjs.push(tdf2Obj(`${target_path}\\${file}`));
	});

	if(!fs.existsSync(cache.csvFolder)){
		fs.mkdirSync(cache.csvFolder);
	}

	fs.writeFile(cache.csvFolder+'\\'+target+'.csv', TdfObjs2Table(tdfObjs), 'utf8', function (err) {
	  if (err) { throw err; }
	});

	function readdirRecursive(rdTarget, format) { //one layer deep only
		let temp = [], temp2 = [];
		let dir = fs.readdirSync(rdTarget);
		dir.forEach(function(listing) {
			if(fs.statSync(rdTarget+'\\'+listing).isDirectory()) {
				temp2 = fs.readdirSync(rdTarget+'\\'+listing).map(e => listing+'\\'+e);
				temp.push.apply(temp, temp2);
			} else {
				temp.push(listing);
			}
		});
		
		temp = temp.filter(e => e.toLowerCase().includes(format));
		return temp;
	}

	function tdf2Obj(target){
		let text = formatTDF(fs.readFileSync(target, 'latin1'));
		
		if(isValidate(target, text)) {
			console.error('skipping file due to invalidation', target);
			return;
		}
		//new tdf obj
		let tdfObj = {};
		//new array of each gadget in file
		let gadgets = digestGadgets(text).split('[').slice(1).map(x => '['+restoreGadgets(x));

		let filename = target.split('\\').slice(2).join('\\').split('.')[0];
		
		gadgets.forEach(function(gadget) {
			let gadgetObj = {};
			let gadgetName = gadget.slice(gadget.indexOf('[')+1, gadget.indexOf(']'));
			
			gadget = gadget.slice(gadget.indexOf('{')+1, gadget.lastIndexOf('}'));

			let prefix = '';
			gadget.split('\n').forEach(function(line) {
				if(prefix != '' && line.includes('}')) {
					prefix = '';
				}			
				if(line.includes('[') && line.includes(']')) {
					prefix = line.slice(line.indexOf('[')+1, line.indexOf(']'));
				}
				if(line.includes('=')) {
					let key = (['COMMON','VERSION','DAMAGE'].includes(prefix.toUpperCase())?prefix+'.':'') + line.split('=')[0];
					let value = line.slice(line.indexOf('=')+1,line.indexOf(';'));
					gadgetObj[key] = value;
				}
				
			});
			
			tdfObj[filename + '.' + gadgetName] = gadgetObj;
		});
		
		return tdfObj;
	}

	function digestGadgets(text) {
		text = text.replaceAll('[COMMON]', '!@#COMMON');
		text = text.replaceAll('[VERSION]', '!@#VERSION');
		text = text.replaceAll('[DAMAGE]', '!@#DAMAGE');
		return text;
	}
	function restoreGadgets(text) {
		text = text.replaceAll('!@#COMMON', '[COMMON]');
		text = text.replaceAll('!@#VERSION', '[VERSION]');
		text = text.replaceAll('!@#DAMAGE', '[DAMAGE]');
		return text;
	}

	function formatTDF(tdf) {
		tdf = tdf.replaceAll('\r\n', '\n'); //normalise newlines
		tdf = tdf.replaceAll('\t',''); //remove tabs
		while(tdf.includes('//')) { //remove //comments
			let i = tdf.indexOf('//');
			let i2 = tdf.slice(i+1).indexOf('\n');
			tdf = tdf.slice(0,i) + tdf.slice(i2+i+2);
		}
		while(tdf.includes('/*')) { //remove /* comments
			let i = tdf.indexOf('/*');
			let i2 = tdf.slice(i+1).indexOf('*/');
			tdf = tdf.slice(0,i) + tdf.slice(i2+i+2);
		}
		return tdf.split('\n').map(l => l=l.trim()).join('\n'); //trim whitespaces
	}

	function TdfObjs2Table(Tdfs) {
		
		let CSV_File = [];
		let header = [];
		
		//create table header
		Tdfs.forEach(function(TDF) {
			
			for (const gadget in TDF) {  
				if (TDF.hasOwnProperty(gadget)) {
					
					for (const variable in TDF[gadget]) {
						if(TDF[gadget].hasOwnProperty(variable)) {
							
							if(!header.includes(variable)) {
								header.push(variable);
							}
						}
					}
				}
			}
		});

		header.unshift('');

		CSV_File.push(header.join(cache.CSV_Delim)); //push first row
		
		let new_row = '';
		
		Tdfs.forEach(function(TDF){
			
			for (const gadget in TDF) {  
				if (TDF.hasOwnProperty(gadget)) {
					
					new_row = new Array(header.length);
					new_row[0] = gadget;
					
					for (const variable in TDF[gadget]) {
						if(TDF[gadget].hasOwnProperty(variable)) {
							
							let value = TDF[gadget][variable];
							let position = header.indexOf(variable);
							new_row[position] = value;
						}
					}
					CSV_File.push(new_row.join(cache.CSV_Delim));
				}
			}
		});
		
		//return csv file
		return CSV_File.join('\r\n');
	}

	function isValidate(target, text) {
		if(target.includes('ENDGAME.GUI')) return true;
		return false;
	}
}

exports.makeTDF = function(target_folder, format, overwrite=false) { 

	if(typeof cache.hapiFolder == undefined || typeof cache.csvFolder == undefined || typeof cache.CSV_Delim == undefined) {
		console.log('improper init()!');
		return;
	}
	
	let target_path = cache.hapiFolder + '\\' + target_folder + (overwrite ? '' : '_new');
	let csvTarget = cache.csvFolder + '\\' + target_folder + '.csv';
	
	if(!fs.existsSync(csvTarget)) {
		console.log('no csv has been generated for ' + target_folder + ', please use tapi.makeCSV first.');
		return;
	}
	
	
	var tdfs = fs.readFileSync(csvTarget, 'utf8').replaceAll('\r\n','\n').split('\n');
	
	fs.rmSync(target_path, { recursive: true, force: true });
	fs.mkdirSync(target_path);

	var tdfs_header = tdfs.shift().split(cache.CSV_Delim);
	
	tdfs.forEach(function(tdf){
		
		let gadget = [];
		tdf = tdf.split(cache.CSV_Delim);

		gadget.push('['+tdf[0].split('.')[1]+']');
		gadget.push('{');
		
		let Vars = {}, cVars = {}, vVars = {}, dVars = {};
		
		
		for(let i = 1;i < tdf.length; i++) {
			if(tdf[i] != '') {
				let key = tdfs_header[i];
				let value = tdf[i];
				let type = key.includes('.') ? key.split('.')[0].toUpperCase() : 'DEFAULT';
				switch(type) {
					case 'COMMON':	cVars[key.split('.')[1]] = value; break;
					case 'VERSION':	vVars[key.split('.')[1]] = value; break;
					case 'DAMAGE':	dVars[key.split('.')[1]] = value; break;
					default:		Vars[key]  = value; break;
				}
			}
		}
		
		if(Object.keys(Vars).length) {
			for(key in Vars){
				if(Vars.hasOwnProperty(key)) {
					gadget.push(`\t${key}=${Vars[key]};`);
				}
			}
		}
		
		if(Object.keys(cVars).length) {
			gadget.push('\t\t[COMMON]');
			gadget.push('\t\t{');
			for(key in cVars){
				if(cVars.hasOwnProperty(key)) {
					gadget.push(`\t\t\t${key}=${cVars[key]};`);
				}
			}
			gadget.push('\t\t}');
		}
		
		if(Object.keys(vVars).length) {
			gadget.push('\t\t[VERSION]');
			gadget.push('\t\t{');
			for(key in vVars){
				if(vVars.hasOwnProperty(key)) {
					gadget.push(`\t\t\t${key}=${vVars[key]};`);
				}
			}
			gadget.push('\t\t}');
		}
		
		if(Object.keys(dVars).length) {
			gadget.push('\t\t[DAMAGE]');
			gadget.push('\t\t{');
			for(key in dVars){
				if(dVars.hasOwnProperty(key)) {
					gadget.push(`\t\t\t${key}=${dVars[key]};`);
				}
			}
			gadget.push('\t\t}');
		}
		
		gadget.push('}\n\n');
		
		let target = tdf[0].split('.')[0];
		appendToo(gadget.join('\n'), target_path + '\\' + target + format);
	});

	function appendToo(data, target) {

		let noneFolderTarget = target.replace(target_path + '\\', '');
		
		if(noneFolderTarget.includes('\\')) {
			let folder = noneFolderTarget.split('\\')[0];
			if(!fs.existsSync(target_path + '\\' + folder)){
				fs.mkdirSync(target_path + '\\' + folder);
			}
		}
		
		if(!fs.existsSync(target)){
			fs.writeFileSync(target, '', function (err) {
				if (err) throw err;
			});
		}
		fs.appendFileSync(target, data, 'latin1');
	}
}

exports.init = function(hapiFolder, csvFolder, CSV_Delim) {
	cache['hapiFolder'] = hapiFolder;
	cache['csvFolder'] = csvFolder;
	cache['CSV_Delim'] = (CSV_Delim == '\\t' ? '\t' : CSV_Delim);
}



