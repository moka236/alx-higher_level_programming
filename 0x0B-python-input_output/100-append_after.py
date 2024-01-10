#!/usr/bin/python3
""" Module that executes a function that appends a line """


def append_after(filename="", search_string="", new_string=""):
    """ Function that appends a new line when a string is found

    Args:
        filename: filename
        search_string: string to search
        new_string: string to append

    """

    res1_li = []
    with open(filename, 'r', encoding="utf-8") as f:
        for line in f:
            res1_li += [line]
            if line.find(search_string) != -1:
                res1_li += [new_string]

    with open(filename, 'w', encoding="utf-8") as f:
        f.write("".join(res1_li))
