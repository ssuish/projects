#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    int digit = 0;
    int place = 0;
    int val = 0;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        num /= 10;
        if (digit == 1)
            val += pow(2, place);
        place++;
    }
    cout << val;
    return 0;
}