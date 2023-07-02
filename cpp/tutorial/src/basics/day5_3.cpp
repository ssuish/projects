#include <iostream>

void returnNothing(){

}

int returnFive(){
    return 5;
}

int returnEarly(){
    std::cout << returnFive();

    return 0;

    std::cout << "Successful"; // unreachable code and will never be printed.
}

int main(){

    /*
        Void returning values, are functions that are not required to return a value.
        Void functions doesn't need a return statement.
        Void functions can't be used in expressions that require a value.
        We can call a function that does not have value.
        We can call a function that returns a value, and ignore that return value.
        Returning a value from a void function is a compile error.
    */

    returnNothing();
    returnFive();
    std::cout << returnFive();

    // Early Returns 
    // A return statement that is not the last statement in a function.
    // lines of code beyond that return statement will be unreachable.
    returnEarly();

    return 0;

}