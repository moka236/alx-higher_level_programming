#!/usr/bin/python3
for i in range(0,10):
    for n in range(i,10):
        if i < n:
            print("{:d}{:d}".format(i,n), end="\n" if i == 9 else ", ")
