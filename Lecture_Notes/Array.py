"""                           ##             ARRAYS            ##"""# Arrays always contain one type of data either all integer or all charactersimport numpy as np# # # A one-lane road, represented by an array# # # Here is a 1x7 roadroad = np.array(['r', 'r', 'r', 'r', 'r', 's', 'r'])# ## # # Print out some information about this roadprint('The length of an array is: '+ str(len(road)))print(len(road))# ## ## # # Access the first index and read its valuevalue = road[0]print('\n')print('Value at index[0]: ' +str(value))# ## # # Read the last item in the array# # # A negative index moves from the end of the list backwards!value_end = road[-1]print('\n')print('Value at index[-1]: '+str(value))# ## ## # # Compare first and last values equal = (value == value_end)print('\n')print('Are the first and last value equal: ' +str(equal))# Array Iteration# Iterating, or looping, through an array is a useful way of reading all the information it contains sequentially.# The following code demonstrates how to iterate through an entire array and how to iterate until you find a certain location.# Extra space between linesprint('\n')import numpy as np # A 1x7 road road = np.array(['r', 'r', 'r', 'r', 'r', 's', 'r']) # Iterate through the array length = len(road) print(length) print('\n') for index in range(0, length):    # Find and store the value at each index     value = road[index]     # Print a new line and the value     print('road['+str(index)+'] = '+str(value))     print('\n')     print('road'+str(index),'=' +str(value)) # Iterate and exit the loop (return) once you reach index 3 - the middle for index in range(0, length):     # Check if index is equal to 3     print(str(index))     if index == 3:         print('We\'ve reached the middle of the road and we\'re leaving the loop!')         break"""                     #           2D Array          #"""import numpy as np# # A simple robot world can be defined by a 2D array# # Here is a 6x5 (num_rows x num_cols) worldworld = np.array([ [0,0,0,1,0],                   [0,0,1,0,0],                   [1,0,1,0,0],                   [1,1,1,1,0],                   [0,1,0,0,1],                   [1,1,0,1,1] ])#Visualize the worldprint('Shape of this array is:' +str(world.shape))print('Notice that the number of rows come before the number of columns')print('It\'s height is: ' +str(world.shape[0]) + ', and It\'s width is:' +str(world.shape[1]))"""                     Read And Compare Value In 2D Array"""# Access a location and read its valuevalue = world[3][0]print('\n')print('Value at 3rd row and first columb is:' +str(value))# Read the first three items in the 3rd rowrow = 2column_index = 0value_left = world[column_index, row]value_middle = world[column_index,row + 1]value_right = world[column_index, row + 2]print('\nThe first three values in row 2 : ' +str(value_left)+','+str(value_middle) +','+str(value_right))# Compare the first two values and print the resultcompare = world[0][0] == world[1][0]print('Do the first Value Match? '+str(compare))# Define a function to plant a tree# and change the value of that tree in that locationdef plant_tree(x,y):    world = np.array([[0, 0, 0, 1, 0],                      [0, 0, 1, 0, 0],                      [1, 0, 1, 0, 0],                      [1, 1, 1, 1, 0],                      [0, 1, 0, 0, 1],                      [1, 1, 0, 1, 1]])    # check that the indices are in boundaries of that array    if(y < world.shape[0] and x < world.shape[1]):        world[y,x] = 1        print('\n' +str(world)) # prints a newline and the current world## # Call the function at the location x = 3 and y = 2# # You can call this multiple time in a row# plant_tree(2,3)## """#                         #           2D Iteration              ## """import numpy as np # A 6x5 robot worldworld = np.array([ [0, 0, 0, 1, 0],                    [0, 0, 0, 1, 0],                    [0, 1, 1, 0, 0],                    [0, 0, 0, 0, 1],                    [1, 0, 0, 1, 0],                    [1, 0, 0, 0, 0] ])print(world)print('\n the shape of this array is:'+str(world.shape))print('\n')## # This function uses nested for loops and knowledge# # about the shape of the array to print out each item with it's index#def iterate2D(world):    for i in range(0, world.shape[0]):##         # x-dimention (rows)        for j in range (0, world.shape[1]):        print('Index[' +str(i)+']['+str(j)+']='+str(world[i][j]))# Now call this Iterate Function# iterate2D(world)print('\n')# This function is similar to our iterate2D function,# but it looks for the first tree in the array and prints its location  [x][y]def first_tree(world):     # Iterate through the function    for a in range(0, world.shape[0]):        for b in range(0, world.shape[1]):    if(world[a][b]) == 1:    print('The first tree found in:['+str(a)+']['+str(b)+']')    returnfirst_tree(world)