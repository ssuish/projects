/*
Strings - Hackerrank
Difficulty: Easy
Suggested Time Complexity: N/A
Topics covered: Arrays, Strings
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-strings

Editorial

*/

#include <iostream>
#include <string>
using namespace std;

#define USER // USER - own solution, EDITORIAL - official/top community solution

#ifdef USER
int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    char temp = a[0];
    cout << a.size() << ' ' << b.size() << endl;
    cout << a + b << endl;
    a[0] = b[0];
    b[0] = temp;
    cout << a << ' ' << b << endl;
    return 0;
}
#endif

#ifdef EDITORIAL
#endif