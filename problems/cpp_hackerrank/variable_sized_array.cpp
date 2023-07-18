#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
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
