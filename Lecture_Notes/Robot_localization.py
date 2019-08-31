# A list 
p = [0.2,0.2,0.2,0.2,0.2]

# Print A list 
print(p)

# # # To create probability vector, p, of arbitary 
# # # we can use this find probability 

p=[]
n=5

# # # for loop to give us probability 
for i in range(n):
    p.append(1/n)
print(p)

# #Write code that outputs p after multiplying each entry 
# #by pHit or pMiss at the appropriate places. Remember that
# #the red cells 1 and 2 are hits and the other green cells
# #are misses.

p=[0.2,0.2,0.2,0.2,0.2]
world = ['green', 'red','red','green','green']
measurements = ['red','green']
pHit = 0.6
pMiss = 0.2

# #Enter code here
p[0] = p[0]  * 0.2
p[1] = p[1] * 0.6
p[2] = p[2] * 0.6
p[3] = p[3] * 0.2
p[4] = p[4] * 0.2

print(p)

# # # Now we will take out the sum of all
p_sum = sum(p)

# # # print sum
print(p_sum)

def sense(p, Z):
    q = []
    for i in range(len(p)):
        hit = (Z == world[i])
        q.append(p[i] * (hit * pHit + (1 - hit) * pMiss))

    # to find the sum we can do like this 
    s = sum(q)
    for i in range(len(p)):
        q[i] = q[i] / s
    
    return q

for k in range(len(measurements)):
    p = sense(p, measurements[k])

print('new measurements',p)

print('sense function', sense(p,Z))

#Program a function that returns a new distribution 
#q, shifted to the right by U units. If U=0, q should 
#be the same as p.


p=[0, 1, 0, 0, 0]
world=['green', 'red', 'red', 'green', 'green']
measurements = ['red', 'green']
pHit = 0.6
pMiss = 0.2


def move(p, U):
    q = [] # we start with empty list 
    for i in range(len(p)): # we go through all the elememnts in p 
        q.append(p[i - U % len(p)]) # we access q by corresponding p 
        # p is shifted by U and if the shift exceed the range 
        # we apply  module operator with the number of states in an argument
        # the reason for "-" sign is that we need to find. 
        # We constructed q by searching for where the robot might have come from and that's from the left 
    return q

print (move(p,1)) 


