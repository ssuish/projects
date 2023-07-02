#include <iostream>

// Example user-defined function, using void return type.
// void return type doesn't need a return statement.
void doPrint(){
    std::cout << "in doPrint()\n";
}

int main(){

    /*
        Functions

        Follows the format: 
        returnType functionName()
        { 
            function body 
        }

        Every executable program needs only one main function. It is the program that the compiler runs.
        Every statement in the function are executed sequentially until it encouters a function call.
        You can call functions more than once.
        You can call functions inside a function.
        Nested functions are not supported.

        Function call tells the CPU to interrupt the current function and execute another function. It puts
        a bookmark at current point of execution, and then calls the function named in the function call. 
        When the function ends, the CPU returns back to the point it bookmarked, and resumes the execution.

    */

    std::cout << "Starting main()\n";
    doPrint(); 
    std::cout << "Ending main()\n";

    return 0; 
}