#!/usr/bin/node
exports.esrever = function (list) {
  let leng = list.length - 1;
  let n = 0;
  while ((leng - n) > 0) {
    const ars = list[leng];
    list[leng] = list[n];
    list[n] = ars;
    n++;
    leng--;
  }
  return list;
};
