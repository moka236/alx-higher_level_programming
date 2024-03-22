#!/usr/bin/node
function add (a, b) {
  const j = a + b;
  console.log(j);
}

add(Number(process.argv[2]), Number(process.argv[3]));
