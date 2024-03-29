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
//or access to the library
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

//define main function
int main(){

    // define integer
    int integer_one;
    integer_one = 5;

    // define a variable called integer_two and assign a value of 9
    int integer_two;
    integer_two = 10;

    // calculate the sum of integer_one and integer_two
    // and assign the result to integer_sum
    int integer_sum = integer_one + integer_two;

    //output the result to standard out
    std::cout << integer_sum << std::endl;

    return 0;
}

// if that was in Python remember Python is dynamically typed language
// whereas C++ is statically typed and you need to declare the variable type prior to assignment


/*
  Basic C++ Data Types

Data type                                           Declaration
*integer(-20,10,-100)                               int
*floating point(20.10,30.26)                        float
*double floating point(contain more decimal)        double
*character(Alhabet)                                 char
*boolean(True or False)                             bool
*valueless(can not declare void variable in CPP     void

*/

#include<iostream>

// Assigning other Data Types

//define main function
int main(){

    // define two floating point numbers.
    float float_number1;
    float_number1 = 10.10;

    float float_number2;
    float_number2 = 20.30;

    // calculate the sum of the two floating point number
    // the float_sum variable and output the results
    float float_sum = float_number1 + float_number2;
    std::cout << float_sum << std::endl;

    // calculate the difference
    float float_diff = float_number2 - float_number1;
    //output the results to cout
    std::cout << float_diff << std::endl;

    // Calculate float_number2 / float_number1 and output the results
    // to cout
    float float_ans = float_number2 / float_number1;
    std::cout << float_ans << std::endl;

    //Calculate the product of the two float_numbers and output the result
    float float_product = float_number1 * float_number2;
    std::cout << float_product << std::endl;

    return 0;

}

/*

 Diff beetween Float and Double

* A float has about 7 digits after the decimal point whereas
 a double float can have about 15 digits

* A double more memory
* Using doubles lead to fewer rounding errors

 */

// Both data types can be represent numbers containing decimals

float x = 5.79;

double x = 5.79;

// access input output library
#include<stdio.h>

//define main function
int main(){

    // define floating point numbers
    float float_num; //define float sum
    float float_sum = 0; //float sum is 0


    double double_num; //define double sum
    double double_sum = 0; //double sum is 0

    int divisions = 10000; //integer division number

    //divide the floating point number by divisions
    float_num = 11.0/divisions;
    double_num = 11.0/divisions;

    //sum the number by the number of divisions to see how close the results
    //get to 11.0
    for (int i; i < divisions; i++) {//for loop in CPP
        float_sum = float_sum + float_num; // here we are not defining float
        double_sum = double_sum + double_num;

    }
    printf("Floating point sum: %.15g\n", float_sum); // maximum
    printf("Double sum: %.15g\n", double_sum);

    return 0;

}

// Bit more practice

// access library
#include<iostream>

//define function
int main(){
    
    int x = 10;
    double y = 20.10;
    float z = 20.10;
    
    int product1 = x * y;
    int product2 = x * z;
    
    //output the result
    std::cout << product1 << std::endl;
    std::cout << product2 << std::endl;
    
    return 0;
    
}
