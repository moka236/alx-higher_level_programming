#!/usr/bin/node
const Squarev = require('./5-square');

class Square extends Squarev {
  charPrint (b) {
    if (b === undefined) {
      b = 'X';
    }
    for (let n = 0; n < this.height; n++) {
      let v = '';
      for (let k = 0; k < this.width; k++) {
        v += b;
      }
      console.log(v);
    }
  }
}

module.exports = Square;
