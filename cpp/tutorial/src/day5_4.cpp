#include <iostream>

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}

void printDouble(int value)
{
    std::cout << value << " double is: " << value * 2 << '\n';
}

int add(int x, int y)
{
    return x + y;
}

int multiply(int a, int b)
{
    return a * b;
}

int main(){

    // Parameters and Arguments
    printValues(6, 7); // This function call has two arguments, 6 and 7

    // Passing return values as arguments
    printDouble(getValueFromUser());

    // More examples
    int x {getValueFromUser()};
    int y {getValueFromUser()};

    std::cout << add(x,y);
    std::cout << add(y * x, x + y);
    std::cout << add(1, multiply(x,y));
    std::cout << multiply(add(x, 5), multiply(5, y));

    return 0;
}