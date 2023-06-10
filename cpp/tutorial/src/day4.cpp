#include <iostream>

int main(){
    
    // measure runtime and memory usage
    


    // Basic Programs
    // C++ standard 
    std::cout << "Hello World\n";

    // but C programs, can run also on C++
    printf("Hello World");

    // bad solution
    std::cout << "Enter an Integer: ";
    int num{ };
    std::cin >> num;
    num = num * 2;
    std::cout << "Double of the number is: " << num << '\n';

    // good solution
    std::cout << "Enter an integer: ";
    int num{ };
    std::cin >> num;
    int doublenum{ num * 2 };
    std::cout << "Double of the number is: " << doublenum << '\n';

    // best solution
    std::cout << "Enter an integer: ";
    int num{ };
    std::cin >> num;
    std::cout << "Double of the number is: " << num * 2 << '\n';

    return 0;
}