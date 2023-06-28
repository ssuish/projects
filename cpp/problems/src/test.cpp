#include <iostream>

int main()
{
    int num = 5;
    int *pnum = &num;
    int* p = &num;

    std::string str1 = "Hello World"; // much more preffered way in c++
    char str[] = "Hello World"; // implementation of c, more primitive and efficient

    std::cout << str1 << std::endl;

    return 0;
}