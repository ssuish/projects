#include <iostream>

using namespace std;

long P(int n, int r)
{
    long out = 1;
    long temp = 1;
    for (int i = 1; i <= n; ++i)
    {
        out *= i;
        if (i == n - r)
            temp = out;
    }
    return out / temp;
}

int main()
{
    int in = 0;
    cin >> in;

    for (int i = 0; i < in; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
            cout << "not valid" << endl;
        else
            cout << P(a, b) << endl;
    }

    return 0;
}