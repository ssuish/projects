#include <iostream>

int main(){

    // Basic Programs
    // C++ standard 
    std::cout << "Hello World\n";

    // but C programs, can run also on C++
    printf("Hello World");

    // Bad solution
    // Explanation: 
    // We overwrite the user input by assigning a new value to the input variable. 
    // If we extend this program to do something else, the input value is already been lost. 
    std::cout << "Enter an Integer: ";
    int num{ }; 
    std::cin >> num;
    num = num * 2; 
    std::cout << "Double of the number is: " << num << '\n';

    // Good solution
    // Explanation:
    // We managed to solve the problem of the bad solution, BUT
    // we are defining a new variable that adds to the complexity to store a value we only use ONCE.
    std::cout << "Enter an integer: ";
    int num{ }; 
    std::cin >> num;
    int doublenum{ num * 2 }; 
    std::cout << "Double of the number is: " << doublenum << '\n';

    // Best solution
    // Explanation:
    // Most efficient possible solution, when std::cout executes, num * 2 will be evaluated.
    // It will double the num and print it. In this case, the num itself will not be altered, and
    // we save up some space in the memory for not defining a new variable for single use.  
    std::cout << "Enter an integer: ";
    int num{ };
    std::cin >> num;
    std::cout << "Double of the number is: " << num * 2 << '\n';

    // Best practice: The primary goal of programming is to make the program work. 
    // Most of the cases reaching the 'good solution' is already enough, what's more
    // important is to optimize for maintability over performance, so in the event of error
    // it will be easy to debug. 

    return 0;
}