const tapi = require('./TAPI/tapi.js');


async function init() {
	
  await tapi.init('..\\ReImagined\\ReImagined HPI RAW', '..\\ReImagined\\Spreadsheets GEN', '\t');
  
  await tapi.makeCSV('download', '.tdf');
  await sleep(10);
  //await tapi.makeTDF('download', '.tdf');
  //await sleep(10);
  await tapi.makeCSV('features', '.tdf');
  await sleep(10);
  //await tapi.makeTDF('features', '.tdf');
  //await sleep(10);
  await tapi.makeCSV('guis', '.gui');
  await sleep(10);
  //await tapi.makeTDF('guis', '.gui');
  //await sleep(10);
  await tapi.makeCSV('units', '.fbi');
  await sleep(10);
  //await tapi.makeTDF('units', '.fbi');
  //await sleep(10);
  await tapi.makeCSV('weapons', '.tdf');
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