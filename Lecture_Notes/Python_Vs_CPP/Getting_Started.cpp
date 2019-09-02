/* Why C++ */


// so before we jump into the code wee need to know
//whats the difference between C++ and Python
// we learn different languages because it has different uses
// Python is fantastic for problem solving more like for prototype or to figure out
// what the goal is and how to get there
// while C++ knows what is running on and it has ways to do really fast


/* python vs C++ doing same results */

// For comments you can either use // or start /* end */

// The include statement paste the ios file into the program
// or access to the library
#include <iostream>
// C++ program is wrapped with a function called main()
int main()
{
    // define integer as x
    int x;
    x = 5;
    
    // instead of using a print we use std::cout to output the result
    std::cout << x;
    
    return 0;
    
}

                   // Python

/*

x = 5
print(x)

*/

// Why do we use curly braket for in C++, and what might be the equivalent in pyhon
// Curly braces group a set of statement together. The Python equivalent is identation

// One Major diff between Python and C++ is that C++ statically typed and Python is dynamically typed
// Below are few examples


// Have a look at Python code first

/*
vehicle_speed = 5
distance_covered = 10.0
vehicle_acceleration = 3.0
 */

// Notice above Python automatically figure out distance_covered is float
//and vehicle_speed is integer
// so in Python you do not need to specify the
// In C++ you need to declare the variable type before you define a value,
//therefore C++ is statistically typed language

                            // C++
int vehicle_speed = 5;
float distance_covered = 10.0;

// Now i will write integer variables declaration in C++

/* C++ code runs from a file called main.cpp
*The implementation goes into a function called main()
*The main function almost always return a zero, which provide evidence
*that the program ran to its end
*/

