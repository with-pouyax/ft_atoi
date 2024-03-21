# ft_atoi

This repository features a custom implementation of the `atoi` (ASCII to integer) function named `ft_atoi`. This function converts a string to an integer, mimicking the behavior of the standard `atoi` function found in the C standard library with some differences in design and implementation.

## Overview

The `ft_atoi` function interprets the initial portion of the string pointed to by `str` as an integer representation and returns its value as an `int`. It handles optional leading whitespace, optional sign characters (`+` or `-`), and a sequence of digits. The conversion terminates when the first non-digit character is encountered.

## Differences From Standard atoi
While ft_atoi closely mirrors the functionality of the standard atoi function, there are notable differences:

#### Error Handling and Undefined Behavior:
The standard atoi may exhibit undefined behavior if the converted value is out of range for integer types. ft_atoi handles some edge cases more explicitly but does not necessarily address all overflow scenarios.
#### Implementation Details:
ft_atoi is implemented with a focus on learning and understanding the conversion process. As such, it may not include some optimizations present in the standard library's version.
#### Extended Whitespace Handling:
ft_atoi explicitly checks for a set of whitespace characters (space, tab, newline, vertical tab, form feed, carriage return) before the numeric conversion, which is similar to the standard atoi but implemented with clear conditions.
