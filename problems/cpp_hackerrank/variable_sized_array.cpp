/*
Pointers - Hackerrank
Difficulty: Easy
Suggested Time Complexity: N/A
Topics covered: Arrays, Pointers
Problem Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

Editorial
Breaking down the problem:
1. Create n-element fixed-length array of integers, outer. Each element i in outer is an array of
    unknown (variable) length, so each outer[i] = inner_i, where inner_i is an array of length k. 
    Recall that the value of k is different for each array.
2. Initialize and fill each variable-length array (i.e inner_i).
3. Perform q queries:
    a. The first value of each query denotes an index in the outer array that we'll call outer_index.
        The second value denotes an index in the inner array located at outer[outer_index].
    b. Find the inner array located at outer[outer_index]. Then print the value of inner[inner_index].
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "./hackerrank.h"
using namespace std;

#ifdef EDITORIAL
int main(int argc, char *argv[])
{
    int n;
    int q;
    cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int **outer = new int *[n];

    // Fill each index of 'outer' with a variable-length array
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for (int j = 0; j < k; j++)
        {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while (q-- > 0)
    {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}

#endif

#ifdef USER
int main()
{

    /*
    First input:
    - n for size of vector
    - q for no. of queries

    Succeeding input queries q:
    - size_of_query k-elements_of_array_located_at_a[i]

    After q
    - locate_a[i] value_of_a[j]_referenced_from_a[i]
    */

    int num_n = 0; // size of array at i
    int num_q = 0;
    int k_size = 0; // size of array at j

    cin >> num_n >> num_q;

    vector<vector<int>> k(num_n);

    for (int i = 0; i < num_n; ++i)
    {
        cin >> k_size;
        k[i].resize(k_size);
        for (int j = 0; j < k_size; ++j)
        {
            cin >> k[i][j];
        }
    }

    int i_ref = 0;
    int j_val = 0;

    for (int i = 0; i < num_q; ++i)
    {
        cin >> i_ref >> j_val;
        cout << k[i_ref][j_val] << endl;
    }

    return 0;
}
#endif
