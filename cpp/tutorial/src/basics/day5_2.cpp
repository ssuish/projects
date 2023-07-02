#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an Integer: ";
    int input{ }; 
    std::cin >> input;

    return input;
}

int main(){
    int num {getValueFromUser()}; 
    std::cout << num << "doubled is: " << num * 2 << '\n';

    // value-returning function that does not have a return type will produce undefined behavior.
    // make sure all functions with non-void return types return a value in all cases.
    // functions can only return a single value.

    // functions can be used:
    // 1. if you need to do something more than once.
    // 2. used to define a sequence of statements we want to execute more than once.

    return 0; // return value of main function is status code. 0 means successful. 
}

// Error: It's illegal to nest a function
// int return7()
// {
//     return 7;
//     int return9()
//     {
//         return 9;
//     }
// }

// Error: You can only return one value
// int getNumbers()
// {
//     return 5;
//     return 7;
// }