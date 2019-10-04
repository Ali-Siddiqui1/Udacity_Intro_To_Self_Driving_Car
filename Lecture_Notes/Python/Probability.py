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
    print('item is:', item,'\n')

# looping through a partial list
print('slicing a list from begining')
for item in my_list[:3]:
    print('item is:', item,'\n')

#Looping through a partial list again
print('slicing a list from the end')
for item in my_list[3:]:
    print('item is:', item,'\n')

# looping through a partial list again
print('slicing a list in the middle')
for item in my_list[2:4]:
    print('item is:', item,'\n')
    
print('Enumerating a list')
for i, item in enumerate(my_list):
    print('item number ',i, 'is',item,'\n')

print('Another way to enumerate a list')
for item in my_list:
    index = my_list.index(item)
    print('item number',item,' has:',index,'\n')
    
#           List Comprehension

# The preferred 'Pyhtonic' way to create a list
number = [x for x in range(10)]
print(number,'\n')

# The above is equivalent to the following just more compact
for x in range(10):
    number.append(x)
    print('number',number,'\n')


# Can do computation / flow control when generating
squares = [x * x for x in range(10)]
print('Squares',squares,'\n')


# This example uses the **modulo** operator
odds = [x for x in range(10) if x % 2 == 1]
print('odds',odds)

# Python Random Library
import random as rd

# call the Function named random 3 time and assign the result of each
a = rd.random()
b = rd.random()
c = rd.random()
print('a:', a,'b:', b,'c:', c)

# Simulating Coin Flips
# How might you change the code to ensure that the \"percent heads\"
# is **consistently** close to 50%? Try modifying
# the code so that the output is consistently within 1% of 50%

num_trails = 90
heads = 0
tails = 0
p_heads = 0.5

# simulating coin flips up to the num_trails specified
for i in range(num_trails):
    # collect a random number between [0,1]
    random_number = rd.random()
    # If the number is less then the heads count it as heads
    # Otherwise, count it as trails
    if random_number < p_head:
        heads = heads + 1
    else:
        tails =+ 0.5

print('In',num_trails,'trials there were' ,heads, 'heads and ',tails, 'tails')

print("Percent heads", 96 * heads/num_trails, "percent")

