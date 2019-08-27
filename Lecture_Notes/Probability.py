## The complement function takes in the probability of an event, P(A).
def complement (P_A):
    ## to-do: change the value of the compliment
    ## so that it calculate the compliment of any variable P_A
    complement = 1
    return complement

# To-do: change this test value and test your code

p_test = 0.25 # a variable

# Running your code with the p_test value
complement_test = complement(p_test)
# it returns a string representation of whatever value was passed in. In easier words, it converts whatever you pass in to a string.
print('Your function returned that the complement of '+str(p_test)+' is: '+str(complement_test))

print('\n') #For extra line

# Test Code
import solution

test_value = 0.4265 #a function

# this line calls your function and stores the output
comp = complement(test_value)
correct_comp = solution.complement(test_value)
print(comp)
print(correct_comp)


