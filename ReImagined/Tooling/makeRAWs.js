const tapi = require('./TAPI');


async function init() {
	
  await tapi.init('./ReImagined/ReImagined HPI GEN', '../ReImagined/Spreadsheets GEN/', '\t');
  
  //await tapi.makeCSV('download', '.tdf');
  //await sleep(10);
  await tapi.makeTDF('download', '.tdf');
  await sleep(10);
  //await tapi.makeCSV('features', '.tdf');
  //await sleep(10);
  await tapi.makeTDF('features', '.tdf');
  await sleep(10);
  //await tapi.makeCSV('guis', '.gui');
  //await sleep(10);
  await tapi.makeTDF('guis', '.gui');
  await sleep(10);
  //await tapi.makeCSV('units', '.fbi');
  //await sleep(10);
  await tapi.makeTDF('units', '.fbi');
  await sleep(10);
  //await tapi.makeCSV('weapons', '.fbi');
  //await sleep(10);
  await tapi.makeTDF('weapons', '.fbi');
  await sleep(10);
}

function sleep(ms) {
  return new Promise((resolve) => {
    setTimeout(resolve, ms);
  });
}

init();