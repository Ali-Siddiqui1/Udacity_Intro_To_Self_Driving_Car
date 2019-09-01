
"""

                #               1-D Car World                 #


"""

# A function that receives the number of spaces in the robot world 
# and then returns a list containing the initial probability for each spaces on the grid 

# Import matplot for visualizing 
import matplotlib.pyplot as plt 

# import numpy library 
import numpy as np 

def initial_robot(grid_size):
    # solution - 1
    grid = []
    
    # TODO: for each space on the map grid, store the initial probability
    # in the grid list. For example, if there are eight spaces on the grid,
    # the grid list should have eight entries where each entry represents
    # the initial probability of the robot being in that space.
    
    for i in range(0, grid_size):
        grid.append(1/grid_size)

        return grid


# Result should be a list with 9 elements all having value 1/9
assert initial_robot(9) == [1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9, 1/9]

