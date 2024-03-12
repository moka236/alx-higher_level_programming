#!/usr/bin/node
let karg = 0;

exports.logMe = function (item) {
  console.log(karg + ': ' + item);
  karg++;
};
