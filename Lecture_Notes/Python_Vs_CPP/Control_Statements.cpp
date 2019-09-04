// In this section i will cover looping with while and for and then will we see switch statements
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
