#!/usr/bin/node
const dict = require('./101-data').dict;

const totlist = Object.entries(dict);
const vales = Object.values(dict);
const valesUniq = [...new Set(vales)];
const newwDict = {};
for (const n in valesUniq) {
  const list = [];
  for (const j in totlist) {
    if (totlist[j][1] === valesUniq[n]) {
      list.unshift(totlist[j][0]);
    }
  }
  newwDict[valesUniq[n]] = list;
}
console.log(newwDict);
