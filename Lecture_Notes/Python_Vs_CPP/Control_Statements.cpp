// In this section i will cover looping with while and for and then we will see switch statements
// Below is an example of Python set of **if statements** versus the C++ equivalent

/*                                      Python

traffic_light = 'r'
if traffic_light == 'g':
   print('Keep Driving')

elif traffic_light == 'r':
      print('Stop')

elif traffic_light == 'y':
     print('prepare to stop')

else:
    print ('No traffic Light detected)

*/

        //                                       CPP

// import input / output library
#include<iostream>

//C++ Program is wrapped with a function called main()
int main(){

    char traffic_light = 'r';

    if(traffic_light == 'g'){
        std::cout << "keep Driving" << std::endl;
    }
    else if (traffic_light == 'r'){
        std::cout << "stop" << std::endl;
    }
    else if (traffic_light == 'y'){
        std::cout << "prepare to stop" << std::endl;
    }
    else{
        std::cout << "No traffic light detected" << std::endl;
    }

    return 0;
}


// Below are some Boolean Logic

/*
Operator                                     python                 CPP
* equal                                      ==                     ==
* not equal                                  !=                     !=
* greater than                               >                      >
* less than                                  <                      <
* greater than or equal                      >=                     >=
* less than or equal                         =<                     =<
*/

// Logical Operator

/*
Operator                Python              CPP
and                     and                 &&
or                      or                  ||
not                     not                 !
*/


// If Statements Practice
//  include input / output library
#include<iostream>

//C++ Program is wrapped with a function called main()
int main(){

    // Create an integer variable and a set of if, elseif and else statement that output whether the number is positive and negative
    int x = 5;
    if (x > 0) {
        std::cout << "Positive Number" << std::endl;
    }
    else if (x < 0) {
        std::cout << "Negative Number" << std::endl;
    }
    else {
        std::cout << "Zero" << std::endl;
    }

    //  Create a character variable containing 'a' for acceleration, 'b' for braking,
    //  'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking,
    //  parked or in neutral.



    char status = 'a';

    if (status == 'a') {
        std::cout << "Accelerating" << std::endl;
    }
    else if (status == 'b') {
        std::cout << "Braking" << std::endl;
    }
    else if (status == 'p') {
        std::cout << "Parking" << std::endl;
    }
    else if (status == 'n') {
        std::cout << "Neutral" << std::endl;
    }
    else {
        std::cout << "Unknown" << std::endl;
    }

    return 0;
}

// Below are example of Python vs C++ Loops
// The example starts with an integer 15 in the elapsed_time variable. With each iteration, the integer is reduced by 1.
// Once the elapsed_time reaches zero, the program leaves the while loop.

/*                                          Python

elaped_time = 15
while(elapsed_time > 0):
    print("Traffic Light is Red")
    elapsed_time = elapsed_time - 1

print("Traffic Light is Green")
*/


//                                            CPP
#include<iostream>

int main(){

    int elapsed_time = 15;
    while(elapsed_time > 0){
        std::cout << "Traffic Light is Red" << std::endl;
        elapsed_time = elapsed_time - 1;
    }

    std::cout << "Traffic Light is Green" << std::endl;
    std::cout << "Traffic Light is Yellow" << std::endl;
    return 0;
}





//                                            Python Vs CPP For  Loops
// This following example is like the while loop except the count variable increases instead of decreases
//(this does not necessarily need to be the case, we just did it that way here).



/*                                               python

 elapsed_time = 15
 for i in range(0, elapsed_time):
     print("Traffic light is Red", i)

 print("Traffic light is green")
*/

//                                                CPP

 // include input/output library

#include<iostream>

int main(){

    int elapsed_time = 15;

    for(int i = 0; i < elapsed_time; i++){
        std::cout << "Traffic Light is Red" << std::endl;
    }

    std::cout << "Traffic Light is green" << std::endl;
    std::cout << "Traffic Light is yellow" << std::endl;

    return 0;
}

/*              Import Note about for loops Python Vs CPP
 
                                In Python
 *for python the iterator was defines here
 i in range (0, elapsed_time):
 
 *Python range's function generates a list of function which in this case would be
 [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14]
 
 *Then Python assign each of these values in turn to the i variable until reaching the end of the list
 
 
                                In CPP
*for CPP the itrator happens in this line of code
 (int i, i < elapsed_time, i++);
 
 *First you declare the i variable and assign a value(in this case zero). Then for loop checks if
 i < elapsed_time
 
 *if true, then the code block is run and then increase by one. The code i++ is equivalent to i=i+1
 
 When
i = 14

that will be the last time that the code block runs.
The code checks that 14 is less than 15, runs the code block and increases i to 15.
Then the code checks if 15 is less than 15. Since that is false, the for loop does not run again.
 
*/


                            // Another Example of for loops

#include<iostream>

int main(){
    //write a for loop that iterates from 0 to 80.
    for(int i = 0; i < 80; i++){
        // If the iterator is greater than or equal to 0 but less than 10
        if (i < 10){
            //output the phrase 'slow'
            std::cout << "slow" << std::endl;
        }
        // If the iterator is between 10 inclusive
        // and less than 30, output the phrase 'medium'
        else if (i < 30){
            std::cout << "Medium" << std::endl;
        }
        
        // If the iterator is between 30 inclusive and 70, output the phrase 'fast'
        else if (i < 70){
            std::cout << "fast" << std::endl;
        }
        // If the iterator is greater than 70 inclusive, output the phrase 'too fast'
        else{
            std::cout << "too fast" << std::endl;
        }
        
    }
    return 0;
}

// One item to note in the above playground is that C++ considers something enclosed in single quotes ('a') to be a char,
// while double quotes ("fast") is a string.




// A Switch statement is statement is quite similar to an if clause.
//Below i will write a program that does the same thing with either a switch statement or a series of if - else clause
// There are no Python switch statement

//                              CPP If statement

//import input , output library
#include<iostream>

// main function
int main(){
    
    char gear_status == 'N';
    
    if(gear_status == 'N'){
        std::cout << "neutral" << std::endl;
    }
    else if(gear_status == 'R'){
        std::cout << "reverse" << std::endl;
    }
    else if(gear_status == 'D'){
        std::cout << "Drive" << std::endl;
    }
    else if(gear_status == 'P'){
        std::cout << "Park" << std::endl;
    }
    
    std::cout << "Your car is currently in gear" << gear_status << std::end;
    return 0;
}

//                          // CPP Switch

// import input , output library
#include<iostream>

// main function
int main(){
    
    char gear_status == 'N';
    
    switch(gear_switch){
        case 'D':
            std::cout << "Driving" << std::endl;
            break;
        case 'N':
            std::cout << "Neutral" << std::endl;
            break;
        case 'R':
            std::cout << "Reverse" << std::endl;
        case 'P';
            std::cout << "Park" << std::endl;
    }
    
    std::cout << "Your car is currently in gear" << gear_status << std::endl;
    
    
    return 0;
}


//                       C++ Libraries
//We have seen how to declare variables, write functions, and use control statements so far which was just the building blocks of any programming language.

// If you want to want to store a string in a variable or do more advance math like taking square root of a number.

// Just like python, C++ also uses pre-built libraries to help make programming easier. In Python, you use these libraries with an

/*                  For Python
import

*/

/*                  In CPP
 
 #include
 or you can write like this
 #include"iostream"
 #include"distance.h"
 
 * The "iostream" file contains function and classes for outputting to the terminal and also reading in from terminal.
 
 // CPP Standard libraries are here -->https://en.cppreference.com/w/cpp/header
 or --> https://en.cppreference.com/w/cpp/links/libs
 
 */

