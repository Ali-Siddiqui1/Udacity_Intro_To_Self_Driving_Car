#            ""              Python Variables                   ""
# Python variables values are assigned here with variable name p_head 
p_head = 0.5
# print statement use 
print("Probability of p_head is:",p_head)

# Python variables "p_tail" are used here
p_tail = 1.0 - p_head 
# printout probability of trail
print("Probability of p_tail is: ",p_tail)


#           ""              Python Data Types           ""

# Here String, numbers and boolean are defined 
"string" # declaring strings with double qoutes
print('single string')
my_string1 = 'string with single qoute'
my_string2 = "string with double qoute"
print('\n') # for new line
print(my_string1)
print(my_string2)

# Numbers And BOOLEANS 
print("Numbers \n")
my_float = 0.5

print(my_float,"\n")

my_int = 1 
print(my_int,"\n")

negative = -11
print(negative,"\n")

fraction = 1/2 
print(fraction,"\n")

# for boolean 
check_boolean = my_int == negative 
print(check_boolean,'\n')



                            # Python   Loops
# Python allows you loop over the list 
print("1- Demonstrating for loop", "\n")
for i in [0,1,2,3,4,5]:
    print(i, "\n")
    
# Here range function is used with a for loop
# This is an example of nested loop which is basically loop inside loop
for left_num in range(5):
    for right_num in range(5):
        product = left_num * right_num
        print(left_num,"x", right_num,"=", product,'\n')

#           List And Loop
my_list = [1, 2, 3, 'a', 'b', 'c']
print("my list:", my_list,'\n')

# print each element of a list indivisually
for item in my_list:
    print('my list is:',item,'\n')
    
# Print the number of element in a list
num_elements = len(my_list) # len function for length
print('my list has:', num_elements,'elements')

# using range to loop through the a list by index
for index in range(len(my_list)):
    item = my_list[index] # accessing an element in a list
    print('item is:', item)

