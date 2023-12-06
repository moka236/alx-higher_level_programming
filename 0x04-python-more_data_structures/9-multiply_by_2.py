#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    my_dir = a_dictionary.copy()
    li_keys = list(my_dir.keys())

    for n in li_keys:
        my_dir[n] *= 2

    return (my_dir)
