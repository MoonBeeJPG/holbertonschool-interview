#!/usr/bin/python3
""" A method that determines if all the boxes can be opened. """


def canUnlockAll(boxes):
    """ Determines if all the boxes can be opened. """
    keys = [0]
    for key in keys:
        for box in boxes[key]:
            if box not in keys:
                if box < len(boxes):
                    keys.append(box)
    return len(keys) == len(boxes)