/*
Intro to Functions - Hackerrank
Difficulty: Easy
Suggested Time Complexity: O(1)
Topics covered: Functions
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

Editorial
First we need to write a function with has 4 parameters with the return value integer. 
To find maximum of the 4 values, we can use the max function available in the algorithm library. 

Notes
- Can be used for finding max of two values.
- Max function has only 2 parameters, if equal, the first parameter is passed.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}