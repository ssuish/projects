#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    int occ = 0;
    int ref = 0;
    cin >> ref >> num;
    while (num != 0)
    {
        if (num % 10 == ref)
            occ++;
        num /= 10;
    }
    cout << occ;
    return 0;
}