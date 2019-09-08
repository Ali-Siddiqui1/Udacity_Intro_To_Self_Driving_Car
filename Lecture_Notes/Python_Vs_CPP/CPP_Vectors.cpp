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
