const tapi = require('./TAPI/tapi.js');


async function init() {
	
  await tapi.init('..\\ReImagined\\ReImagined HPI Compile', '..\\ReImagined\\ReImagined Spreadsheets Source', '\t');
  
  await tapi.makeCSV('ReIm_Download', '.tdf');
  await sleep(10);
  //await tapi.makeTDF('download', '.tdf');
  //await sleep(10);
  await tapi.makeCSV('ReIm_Features', '.tdf');
  await sleep(10);
  //await tapi.makeTDF('features', '.tdf');
  //await sleep(10);
  await tapi.makeCSV('ReIm_GUIs', '.gui');
  await sleep(10);
  //await tapi.makeTDF('guis', '.gui');
  //await sleep(10);
  await tapi.makeCSV('ReIm_Units', '.fbi');
  await sleep(10);
  //await tapi.makeTDF('units', '.fbi');
  //await sleep(10);
  await tapi.makeCSV('ReIm_Weapons', '.tdf');
  await sleep(10);
  //await tapi.makeTDF('weapons', '.tdf');
  //await sleep(10);
}

function sleep(ms) {
  return new Promise((resolve) => {
    setTimeout(resolve, ms);
  });
}

init();