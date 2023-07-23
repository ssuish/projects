#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int primes = 0;
    cin >> a >> b;
    bool list[b];
    if (b < 3)
        cout << primes;
    else if (b - a < 1)
        cout << primes;
    else
    {
        for (int i = 2; i < b; i++)
            list[i] = true;
        for (int i = 2; i * i < b; i++)
            if (list[i] == true)
                for (int j = i; j * i < b; j++)
                    list[j * i] = false;
        for (int i = a + 1; i < b; i++)
        if (list[i] == true)
            primes++;
    }
    cout << primes;
    return 0;
}