#!/usr/bin/python3
""" A method that determines if all the boxes can be opened. """

def canUnlockAll(boxes):
    """ Determines if all the boxes can be opened. """
    count = 0
    for i in boxes:
        if i == boxes:
            count += 1
            for boxes[i] in boxes:
                if boxes[i] == boxes:
                    count += 1
    return count
