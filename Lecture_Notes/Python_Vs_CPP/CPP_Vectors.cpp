// CPP vectors are just like Python list but CPP also has list which but doesn't work the same way as python does
// CPP list and Python list are both in family structure called sequence containers. These containers allows us to store values in series and then access those values
//
// include file from standard library
#include<vector>
#include<iostream>
#include<vector>
#include<string>
// Declaring CPP Vectors
typedef variablename;
// also need to declare what kind of values will go inside the vector such as integer, char, float, string etc

int main(){
    std::cout<char> charactervectorvariable;
    std::cout<int> intvectorvariable;
    std::cout<float>floatvectorvariable;
    std::cout<double>doublevectorvariable;
    // more generally you can declare a vector with
    //std::vector <<datatype<<variablename;

    return 0;
}

// Practice CPP Vector Library
//
// import the vector library
#include<vector>
#include<iostream>
//  write a program that declares three integer vectors named:
int main(){
    // vector 1
    std::vector<int> vector1;
    // vector 2
    std::vector<int> vector2;
    //vector 3
    std::vector<int> vector3;

    return 0;
<<<<<<< HEAD

}

// CPP syntax is bit hard and to avoid std we can declare this at the top like where we usually put libarary

 //so the syntax would be like

#include<iostream>
#include<vector>
// declare namespace
using namespace std;

int main(){
    vector<int> intvectorvariable;
    int intvector = 5;
    // now we don't have to define it again
    cout << intvector << endl;
    return 0;
}

   //                    Another Example of using namespace


#include <iostream>
#include <string>

// Use the standard namespace
using namespace std;
int main() {

    // change the code so that it no longer uses "std::"

    string fruit = "apple";
    string vegetable = "broccoli";

    cout << "My favorite fruit is " << fruit <<
    " and my favorite vegetable is " << vegetable << "\n";

    return 0;
}
//              Python vs CPP Comparison

/*              Python List
 mylist = [5.0,3.0,2.7,8.2,7.9]
 print(mylist)

 */

//              CPP Vectors

#include<iostream>
#include<vector>

using namespace std;

int main(){
    // declare vector of size five but without assigning any values
    vector<float> myvector (5);

    // assign now
    vector[5.0] = 5.0;
    vector[3.0] = 3.0;
    vector[2.7] = 2.7;
    vector[8.2] = 8.2;
    vector[7.9] = 7.9;

    for (int i = 0; i < myvector; i++){
        cout << myvector[i] << "";
    }
    cout<<endl;
    return 0;
}
// Declaring and Defining a Simultaneously

std::vector < int > myvector(10,6);

//Another way of Declaring and Defining Simultaneously with Brackets
// but CPP C++11 or C++17 required

std::vector<float> myvector = {5.0,3.0,2.7,8.2,7.9}

// Assign helps you quickly populate a vector with fixed values like this code
vector<int> intvariable;
// populate the vector with ten integers all having the value of 16
intvariable.assign(10,16);
// Also the assign method let you override your current vector with a new vector

// Push_back adds an element to the end of the vector
vector<int> intvariable;
intvariable.Push_back(19);

// size return the size of the vector
intvariable.size()


// Here is a program that initiate a vector and then uses a for loop to populate the vector with values.
// Then another for loop reads out the vector values.

// Import library
#include<iostream>
#include<vector>

// main function
int main(){

    vector<float> example;

    // initiate a vector
    for(int i = 0;i < 5; i++){
        example.Push_back(i*5.231);
    }
    // reads out the vector values
    for(int i = 0; i < example.size(); i++){
        cout << example[i] << endl;
    }
    return 0;
}

//In practice both i++ and ++i gives you the same result
// These are the short way of writing i = i + 1
// The diff between two is subtle

int i = 5;
//In the postfix case, i++, int x = i is evaluated first and then i = i + 1 occurs.
int x = i++; // x = 5, i = 6 (called postfix)

// In the prefix case, ++i, i = i + 1 occurs first and then int x = i executes.
int x = ++i; // x = 5, i = 6 (called prefix)

// In both cases, the i variable increases by 1.

//                      An example

//include the iostream and vector libraries
#include<iostream>
#include<vector>
// Use the standard namespace
using namespace std;

// CPP main function
int main() {

    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    vector<float>length(3,5.0);
    for(int i = 0; i < length.size(); i++){
        cout << length[i] << "";
    }
    cout << endl;
    // Part 2: Use push back to add the values 3.0, 2.5, 1.4
    //      to the back of the vector
    length.push_back(3.0);
    length.push_back(2.5);
    length.push_back(1.4);
    // Part 3: Print out the vector again using cout

    for(int i = 0; i < length.size(); i++){
        cout << length[i] << "";
    }
    cout << "\n";
    // Part 4: Use the vector assign method to override the current vector.
    // The overriden vector should have 3 elements with
    // the values {5.0, 5.0, 5.0}
    length.assign(3,5.0);
    // Part 5: Print out the vector

    for(int i = 0; i < length.size(); i++){
        cout << length[i] << "";
    }
    cout <<"\n";

    return 0;
}


//              Math And Vectors

// Example one:     multiply each element in a vector by a costant

// import library
#include<iostream>
#include<vector>

using namespace std;

// CPP main function
int main(){

    // declare and define
    vector <float>dot;

    // assign 5 floats with value 10
    dot.assign(5,10.0);

    // print out the vector
    for(int i = 0; i < dot.size(); i++){
        cout << dot[i] << endl;
    }

    // Blank link outputted to the terminal
    cout << endl;

    //multiply each value in the vector by 20
    for(int i = 0;i < dot.size(); i++){
        dot[i] = 20*dot[i];
    }
    // print out the vector
    for(int i = 0; i < dot.size(); i++){
        cout << dot[i] << endl;
    }
    return 0;
}


// Example two: Add two vector together

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> exampleone;
    vector<int> exampletwo;
    vector<int> examplesum;

    // assign values
    exampleone[0] = 2;
    exampleone[1] = 3;
    exampleone[2] = 4;
    exampleone[3] = 5;
    exampleone[4] = 6;

    exampletwo[0] = 1;
    exampletwo[1] = 10;
    exampletwo[2] = 20;
    exampletwo[3] = 30;
    exampletwo[4] = 40;

    cout << "vector one";

    // print out the first vector
    for(int i = 0; i < exampleone.size();i++){
        cout << exampleone[i] << "";
    }

    // create a new line in the terminal
    cout << endl;

    cout << "vector two";

    // print out the second vector
    for(int i = 0; i < exampletwo.size(); i++){
        cout << exampletwo[i] << "";
    }

    // create a new line in the terminal
    cout << endl;

    cout<< "vector sum";

    //add the two vector together
    for(int i = 0; i < examplesum.size(); i++){
        examplesum[i] = exampleone[i] + exampletwo[i];
    }

    // print out the vector
    for(int i = 0; i < examplesum.size(); i++){
        cout << examplesum[i] << "";
    }
    // create a new line in terminal
    
    //                           Two Dimensional Vectors
    //Now, we are going to use vectors to store matrices just like python uses list of list to store matrices
    // for CPP we use vectors of vectors
    
    //                                  Python Vs CPP
    
    /*                                  Python
     matrixexample=[[2,2,2],
     [2,2,2],
     [2,2,2],
     [2,2,2]]
     print(matrixexample)
     */
    
    //                                  CPP
    
    // import libraries
#include<iostream>
#include<vector>
    using namespace std;
    
    // CPP main function
    int main(){
        // declare and define two dimensional vector of type int
        vector < vector<int> > twodvector;
        
        // a one dimensional vector called singlerow is declared. The singlerow vector has the form [2, 2, 2].
        // setup a row
        vector <int> singlerow(3,2);
        
        // the singlerow vector is appended to the twodvector five times
        // append five rows
        for(int i;i < 5; i++){
            twodvector.push_back(singlerow);
        }
        // print out the matrix
        for(int row = 0; row < twodvector.size(); row++){
            for (int column = 0; column < twodvector[0].size(); column++){
                cout <<twodvector[row][column]<< "";
                
            }
            cout << endl;
        }
        return 0;
    }
    
 
