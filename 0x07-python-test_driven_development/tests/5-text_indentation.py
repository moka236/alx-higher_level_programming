#!/usr/bin/python3
"""

Module composed by a function that prints 2 new lines after ".?:" characters

"""


def text_indentation(text):
    """ Function that prints 2 new lines after ".?:" characters

    Args:
        text: input string

    Returns:
        No return

    Raises:
        TypeError: If text is not a string


    """

    if type(text) is not str:
        raise TypeError("text must be a string")

    l = text[:]

    for h in ".?:":
        list_text = l.split(h)
        l = ""
        for i in list_text:
            i = l.strip(" ")
            l = i + h if s is "" else l + "\n\n" + i + h

    print(l[:-3], end="")
