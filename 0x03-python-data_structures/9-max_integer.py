#!/usr/bin/python3
def max_integer(my_list=[]):
    leng = len(my_list)

    if leng == 0:
        return (None)

    more_int = my_list[0]

    for i in range(1, leng):
        if my_list[i] > more_int:
            more_int = my_list[i]

    return (more_int)
