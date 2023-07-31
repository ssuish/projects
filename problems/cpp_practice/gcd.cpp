#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int inputs = 0;
    cin >> inputs;

    for (int i = 0; i < inputs; ++i)
    {
        int m = 0;
        cin >> m;
        int n[m] = { };
        for (int j = 0; j < m; ++j)
            cin >> n[j]; 

        int output = n[0];
        for (int j = 1; j < m - 1; ++j)
            output = gcd(output, n[i]);

        cout << output;
    }
    return 0;
}