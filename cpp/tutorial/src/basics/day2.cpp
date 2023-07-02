#include <iostream>

int main(){

    /*
        iostream library: cin, cout, endl

        std::cout (character output) - allows us to send data to console, to be printed as text.
        std::cin (character input) - allows us to get data from the user, to be stored in a variable.
        std::endl (end line) - is used to end the current line.
    */

    // std::count 
    // << (insertion operator) - is used to insert data into cout.
    std::cout << "Hello World!"; 

    // inserting a variable into cout
    int x {5};
    std::cout << x;

    // inserting multiple data into cout
    std::cout << "Hello" << " World!";
    std::cout << "the value of x is " << x;

    // std::endl
    // ends the current line
    // without std::endl
    std::cout << "Hello World!";
    std::cout << "Hello World!";

    // with std::endl
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;

    // best practice: output a new line whenever a line of output is complete.

    // std::endl vs '\n'
    // std::endl does to two jobs: move the cursor to next line, and flushes the buffer.
    // we don't typically needed to flush the buffer every line, let the system do flush itself.
    // So we preferred to use the character '\n' instead.
    // '\n' moves the cursor to next line, but tt doesn't request a flush to often perform better.
    
    // using \n
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";

    // best practice: prefer '\n' instead of std::endl when outputting text in console.

    /*
        std:count is buffered, means that if your program crashes, aborts, or is paused,
        before the buffer is flushed, any output still waiting in the buffer will not be
        displayed.

        Statements in our program request that the output be sent to the console. However,
        that output is typically not set to the console immediately. Instead, the requested
        output "gets in the line", and is stored in a region of memory set aside to collect
        request (called as buffer). Periodically the buffer is flushed, meaning all data 
        collected in the buffer is transferred to its destination (in this case the console).

        Buffering maximizes overall throughput, at all cost of increasing response time.
    */

    // std::cin
    // reads input from the keyboard using extraction operator (>>). The input must be stored in
    // a variable to be used.
    int z{};
    std::cin >> x; 
    std::cout << "You entered: " << x << "\n";

    // inputing multiple values in single line
    int m1{};
    int m2{};
    std::cin >> m1 >> m2;
    std::cout << "You entered: " << m1 << " and " << m2 << '\n'; 

    // Test this following input on the program below.
    // input: 'h', 3.7, -3, "hello", 3000000000, 123abc
    std::cout << "Enter an interger \n";
    int in{};
    std::cin >> in;
    std::cout << "Output: " << in << '\n';
    // IMPORTANT: Investigate this input/output behavior!

    return 0;
}