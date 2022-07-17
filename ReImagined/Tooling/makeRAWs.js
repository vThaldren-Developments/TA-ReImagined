const tapi = require('./TAPI');


async function init() {
	
  await tapi.init('..\\ReImagined\\ReImagined HPI Compile', '..\\ReImagined\\ReImagined Spreadsheets Source', '\t');
  
  //await tapi.makeCSV('download', '.tdf');
  //await sleep(10);
  await tapi.makeTDF('ReIm_Download', '.tdf');
  await sleep(10);
  //await tapi.makeCSV('features', '.tdf');
  //await sleep(10);
  await tapi.makeTDF('ReIm_Features', '.tdf');
  await sleep(10);
  //await tapi.makeCSV('guis', '.gui');
  //await sleep(10);
  await tapi.makeTDF('ReIm_GUIs', '.gui');
  await sleep(10);
  //await tapi.makeCSV('units', '.fbi');
  //await sleep(10);
  await tapi.makeTDF('ReIm_Units', '.fbi');
  await sleep(10);
  //await tapi.makeCSV('weapons', '.tdf');
  //await sleep(10);
  await tapi.makeTDF('ReIm_Weapons', '.tdf');
  await sleep(10);
}

function sleep(ms) {
  return new Promise((resolve) => {
    setTimeout(resolve, ms);
  });
}

init();