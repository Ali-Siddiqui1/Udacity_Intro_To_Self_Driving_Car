an_arr = [1,2,3,4,5]
print("an_arr lenght: ", len(an_arr))
print(an_arr)


# print element values:

for arr in an_arr:
    print(arr)

# print index and value of element:

# option - 1 (clean way):
for idx, val in enumerate(an_arr): 
    print("index: ", idx, "value: ", val)
# option - 2 (verbose way):
arr_len = len(an_arr)
for idx in range(arr_len):
    print("index: ", idx, "value: ", an_arr[idx])


import numpy as np

# A 4x5 robot world of characters 'o' and 'b'
world = np.array([ ['o', 'b', 'o', 'o', 'b'],
                  ['o', 'o', 'b', 'o', 'o'],
                  ['b', 'o', 'o', 'b', 'o'],
                  ['b', 'o', 'o', 'o', 'o'] ])

# Sensor measurement
measurement = ['b', 'o']

# This function takes in the world and the sensor measurement.
# Complete this function so that it returns the indices of the 
# likely robot locations, based on matching the measurement 
# with the color patterns in the world

def find_match(world, measurement):
    # Empty possible_locations list
    possible_locations = []
    ## TODO: Iterate through the world 
    ## Look at two adjacent indices at a time - the square the robot is 
    ## on top of and the square to its right
    ## (Making sure not to go past the bounds of the world)

    ## TODO: If two adjacent colors in the world match 
    ## the two colors in the sensor measurement
    ## Add those indices to the possible_locations list
    ## Append them in the format [row_index, column_index], i.e. [0, 0]
    for row_index, row_value in enumerate(world):
        for col_index, col_value in enumerate(row_value):
            if col_index < len(row_value) - 1:
                robot_square = world[row_index][col_index]
                right_square = world[row_index][col_index + 1]
                if robot_square == measurement[0] and right_square == measurement[1]:
                    # append is used to add a value into an array
                    possible_locations.append([row_index, col_index])
    print(possible_locations)
    return possible_locations
   
# This line runs the function and stores the output - do not delete 
locations = find_match(world, measurement)
