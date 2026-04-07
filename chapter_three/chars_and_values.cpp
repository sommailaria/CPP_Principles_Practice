// Use a for statement to write out a table of characters with their corresponding integer values. 
// Include also uppercase letters and digits. 

#include <iostream>

int main() {
    // insert code here...
    char letter{'a'};
    char uppercase{'A'};
    char digits{'1'};
    
    for (letter = 'a'; letter <= 'z'; ++letter) {
        std::cout << letter << " "<< letter + 1 << std::endl;
    }
    
    for (uppercase = 'A'; uppercase <= 'Z'; ++uppercase) {
        std::cout << uppercase << " "<< uppercase + 1 << std::endl;
    }
    for (digits = '1'; digits <= '9'; ++digits) {
        std::cout << digits << " " << digits + 1 << std::endl;
    }
}