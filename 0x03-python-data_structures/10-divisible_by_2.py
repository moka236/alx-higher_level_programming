#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    my_div = []

    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            my_div.append(True)
        else:
            my_div.append(False)

    return (my_div)
