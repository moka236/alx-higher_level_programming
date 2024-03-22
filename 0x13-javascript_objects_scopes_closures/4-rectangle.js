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

  rotate () {
    const ars = this.width;
    this.width = this.height;
    this.height = ars;
  }

  double () {
    this.width *= 2;
    this.height *= 2;
  }
}

module.exports = Rectangle;
