#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    li_keys = list(a_dictionary.keys())

    for di_value in li_keys:
        if value == a_dictionary.get(di_value):
            del a_dictionary[di_value]

    return (a_dictionary)
