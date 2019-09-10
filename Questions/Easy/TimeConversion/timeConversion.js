'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the timeConversion function below.
 */
function timeConversion(s) {

    let hh = parseInt(s.substring(0, 2));
    let mm = s.substring(3, 5);
    let ss = s.substring(6, 8);

    let newTime = "";

    if (s.search("AM") == -1) {
        //PM
        hh < 12 ? newTime += (hh + 12) : newTime += hh;
        newTime += ":" + mm + ":" + ss;
        
    } else {
        //AM
        if (hh == 12) {
            newTime += "00";
        } else if (hh < 10) {
            newTime += ("0" + hh);
        } else {
            newTime += hh;
        }
        newTime += ":" + mm + ":" + ss;

    }
    return newTime;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = timeConversion(s);

    ws.write(result + "\n");

    ws.end();
}
