#!/usr/bin/python3
"""
IslandPerimiter module
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid
    """
    pm = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if column == 0:
                    pm += 1
                elif grid[row][column - 1] == 0:
                    pm += 1
                if column == (len(grid[row]) - 1):
                    pm += 1
                elif grid[row][column + 1] == 0:
                    pm += 1
                if row == 0:
                    pm += 1
                elif grid[row - 1][column] == 0:
                    pm += 1
                if row == (len(grid) - 1):
                    pm += 1
                elif grid[row + 1][column] == 0:
                    pm += 1
    return pm
