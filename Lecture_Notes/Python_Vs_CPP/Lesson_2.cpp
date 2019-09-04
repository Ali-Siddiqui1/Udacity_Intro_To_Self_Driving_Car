/*
 Functions: Python Vs C++

 *Functions have the same role in both Python and C++
 *Function group statements together to perform some task
 *Function help you avoid coping and pasting the same code

        #The syntax for writing function is slightly different#

 ** Python detects the end of a code line based on seeing a carriage return and new line feed. C++ uses a semi-colon for same purpose

 ** Python uses indentation to group code statemets together, but C++ uses curly brackets

 */

// below function takes in a velocity and time.These are multiplied together to calculate a distance.


/*              *** Python   ***

def distance(velocity,time_elapsed):
    return velocity * time_elapsed

print(distance(5,4))
print(distance(12.1,7.9))
 */

//                  **CPP**             //

// Import input/output standard library
#include<iostream>

// function accept two float variable and return a float
float distance(float velocity, float time_elapsed);

// All CPP programs require a main() function that returns a zero.
//The main() function calls the distance and output the results to the terminal
int main(){

    std::cout << distance(5,4) << std::endl;
    std::cout << distance(12.1,7.9) << std::endl;

}
// And now you have the function definition
float distance(float velocity, float time_elapsed){
    return velocity * time_elapsed;
}
 Note *** The Only diff is that the main function does not accept any arguments and return an integer of value zero. On the other hand, the distance function accept two floats and return a float


////        ******     END      ******  /////

// A function called distance, with three inputs and one output.
//*Inputs are: Velocity acceleration and time
//*Output ares: distance traveled over the elapsed time.

// distance = velocity x elapsedtime + 0.5 x acceleration x elapsedtime x elapsedtime

// Here is the solution

//Include library
#include<iostream>

// Declare function called distance
float distance(float velocity, float acceleration, float elapsed_time);

// C++ program is wrapped with a function called main()
int main(){
    
    std::cout << distance(3,4,5) << std::endl;
    std::cout << distance(7.0,8.9,10.9) <<std::endl;
    
    return 0;
}

// define your function
float distance(float velocity, float acceleration, float time_elapsed){
    return velocity*time_elapsed+0.5*acceleration*time_elapsed*time_elapsed;
    
}





