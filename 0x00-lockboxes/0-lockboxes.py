#!/usr/bin/python3
""" A method that determines if all the boxes can be opened. """

def canUnlockAll(boxes):
    """ Determines if all the boxes can be opened. """
    key = []
    for i in boxes[0]:
        if key == boxes[i]:
            return False
    return True