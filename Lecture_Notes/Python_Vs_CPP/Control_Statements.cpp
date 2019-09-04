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
