#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    count_1 = 0

    for i in range(x):
        try:
            print("{:d}".format(my_list[i]), end='')
        except TypeError:
            pass
        except ValueError:
            pass
        else:
            count_1 += 1

    print()
    return (count_1)
