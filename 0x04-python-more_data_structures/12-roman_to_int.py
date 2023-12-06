#!/usr/bin/python3
def to_subtract(li_num):
    to_sub = 0
    m_list = max(li_num)

    for n in li_num:
        if m_list > n:
            to_sub += n

    return (m_list - to_sub)


def roman_to_int(roman_string):
    if not roman_string:
        return 0

    if not isinstance(roman_string, str):
        return 0

    rom_n = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    li_keys = list(rom_n.keys())

    num = 0
    last_rom = 0
    li_num = [0]

    for ch in roman_string:
        for r_num in li_keys:
            if r_num == ch:
                if rom_n.get(ch) <= last_rom:
                    num += to_subtract(li_num)
                    li_num = [rom_n.get(ch)]
                else:
                    li_num.append(rom_n.get(ch))

                last_rom = rom_n.get(ch)

    num += to_subtract(li_num)

    return (num)
