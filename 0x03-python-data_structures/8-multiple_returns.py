#!/usr/bin/python3
def multiple_returns(sentence):
    len_sens = len(sentence)

    if (len_sens == 0):
        new_tuples = (len_sens, None)
    else:
        new_tuples = (len_sens, sentence[0])

    return (new_tuples)
