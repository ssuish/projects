/*
Pointers - Hackerrank
Difficulty: Easy
Suggested Time Complexity: O(1)
Topics covered: Functions, Pointers
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

Editorial
Method 1: Using temp value
Declare a temporary variable(temp), 
which stores the value of a. Update the value of *a to *a + *b 
and the value of *b = abs(temp - *b).

Method 2: Using equivalence
Using this formula = (a + b) - (2 * b) = (a - b)

Notes
- Pointers points to memory address of a variable. 
- When we declare a pointer we prefixes & to variable name.
- cstdlib is required to include in the program to use built-in abs function.
*/

#define METHOD1

#ifdef METHOD1
#include <cstdio>
#include <cstdlib>  // required to use the built-in abs() function

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
#endif

#ifdef METHOD2
#include <stdio.h>

int abs(int a) { 
    return (a>0 ? a : -a);
}

void update(int *a,int *b) {
    *a = *a + *b;
    *b = abs(*a - 2 * *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
#endif