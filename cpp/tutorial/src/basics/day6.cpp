#include <iostream>

using namespace std;

// Life cycle of local variable
int add(int x, int y) // variable x and y created and initialized here
{
    int z {x + y}; // variable z created and initialized here
    return z; 
} // variable x, y, and z are destroyed here


int main()
{
    std::cout << add(1, 2) << '\n';

    return 0;
}