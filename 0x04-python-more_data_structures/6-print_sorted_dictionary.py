#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    li_ordr = list(a_dictionary.keys())
    li_ordr.sort()
    for n in li_ordr:
        print("{}: {}".format(n, a_dictionary.get(n)))
