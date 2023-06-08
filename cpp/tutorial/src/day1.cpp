
#include <iostream>

int main(){

    /*
        Object and Variables
        
        Object - is a region of storage, it can be named or unnamed.
        Variable - is a named object.
        Identifier - refers to the name of the object.
    */

    // defining a variable named x and assigning it a value of 5
    // where int is the type specifier.
    int x = 5;

    /*
        Variable assignment and initialization

        Assignment - is the process of giving a variable a value.
        Initialization - is the process of giving a variable its first value.
    */ 

    int width;  // declaration of a variable named width
    width = 5;  // assignment of a value to the variable width
                // the value of width is now 5

    // 6 basic ways to initialize a variable
    int a;          // no initializer (default initialization)
    int b = 5;      // initializer after declaration (copy initialization)
    int c(5);       // initializer in parenthesis (direct initialization)
    int d{5};       // initializer in braces  (direct list initialization)
    int e = {5};    // initializer in braces after equal sign (copy list initialization)
    int f{};        // initializer is empty braces (value initialization)

    /*
        Default initialization 
            - is initialization without an initializer.
            - the value of the variable is indeterminate.
        Copy initialization
            - is initialization with an equal sign.
            - is also used whenever values are implicitly copied or converted, 
                such as when passing function arguments or returning values from functions.
        Direct initialization
            - is initialization with parenthesis.
            - initially introduced to allow more efficient of complex objects.
            - also used when values are explicitly cast to another type.
        Direct list initialization (uniform initialization)
            - is initialization with braces.
            - introduced to provide more consistent initialization syntax.
            - provides a way to initialize objects with a list of values.
            - disallows narrowing conversions.

        List initialization is generally preferred over other forms of initialization.
    */


}