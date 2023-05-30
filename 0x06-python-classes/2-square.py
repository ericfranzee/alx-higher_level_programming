#!/usr/bin/python3
"""class Square"""


class Square:
    """intializes a class with a private field size"""

    def __init__(self, size=0):
        """validates size"""
        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size
