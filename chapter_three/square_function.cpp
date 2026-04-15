// Implement square() without using the multiplication operator;
// that is, do the x*x by repeated addition (start a variable result at 0 and add x to it x times).

#include <iostream>

int square(int num) {
    int result {0};                        //the "result" variable acts as an accumulator;
    
    for (int i {0}; i < num; i++) {       // created a loop starting at 0, which determines how many times 
                                          // we need to add the number to itself. 

        result += num;                    // adding num to result each time the loop runs.
                                          
    }                                        
    return result;
}
