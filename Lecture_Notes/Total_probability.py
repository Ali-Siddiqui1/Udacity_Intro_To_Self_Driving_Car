def total_probability(p_diease, p_pos_given_disease, p_pos_given_no_disease):

    ## TO-DO: Change the value of total so that it calculates the
    ## total probability of a positive test result
    ## You may use other variable in this function as well as long
    ## as total is correct

    total = p_diease * p_pos_given_disease / p_pos_given_no_disease

    return total

p_disease = 0.001
p_pos_given_disease = 0.01
p_pos_given_no_disease = 0.1

tot = total_probability(p_disease, p_pos_given_disease, p_pos_given_no_disease)
print('your function returned that the total probability is: '+str(tot))


# Testing code

import solution

p_disease = 0.1
p_pos_given_disease = 0.9
p_pos_given_no_disease = 0.2

# This line calls your function and stores the output
total = total_probability(p_disease, p_pos_given_disease, p_pos_given_no_disease)
correct_total = total_probability(p_disease,p_pos_given_disease,p_pos_given_no_disease)


# Assertion, comparison test
try:
    assert (abs(total - correct_total) < 0.001)
    print('that\s right!')
except:
    print('Your code returned the total probability is: ' +str(total) + ', which does not match the correct value.')

"""
                #                Bayes' Rule                        #
"""



# given three input probabilities, complete this function
# so that it returns the posterior probability

def bayes(p_A, p_B_given_A, p_notB_given_notA):
    ## TO-DO: Calculate the posterior probability
    ## and change this value
    posterior = p_A * p_B_given_A / p_A * p_notB_given_notA

    return posterior

# TO-DO: Change these values, run your code with them, and use print
# statements to see the output of your function and get feedback

p_A = 0.2
p_B_given_A = 0.9
p_notB_given_notA = 0.5

posterior = bayes(p_A,p_B_given_A, p_notB_given_notA)
# print(posterior)


# Test code - do not change
# import solution

test_p_A = 0.1
test_p_B_given_A = 0.1
test_p_notB_given_notA = 0.1

# This line calls your function and stores the output
posterior = bayes(test_p_A, test_p_B_given_A, test_p_notB_given_notA)
print(posterior)
correct_posterior = bayes(test_p_A,test_p_B_given_A, test_p_notB_given_notA)
print(correct_posterior)
print(correct_posterior)

# Assertion, comparison test
try:
    assert(abs(posterior - correct_posterior) < 1)
    print('That\s right!')
except:
    print('Your code returned that the posterior is:'+str(posterior)+ ',which does not match the correct value')
















