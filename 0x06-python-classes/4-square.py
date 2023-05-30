#!/usr/bin/python3
"""a square class"""


class Square:
    """initializes the square"""

    def __init__(self, size=0):
        """square initialization"""
        self.size = size

    @property
    def size(self):
        """returns the size of the square"""
        return (self.__size)

    @size.setter
    def size(self, value):
        """validates the value"""
        if type(value) is not int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = value

    def area(self):
        """calculates the area of square"""
        return (self.__size ** 2)
