#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if ((w > 0) && (h > 0)) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    for (let n = 0; n < this.height; n++) {
      let v = '';
      for (let k = 0; k < this.width; k++) {
        v += 'X';
      }
      console.log(v);
    }
  }
}

module.exports = Rectangle;
