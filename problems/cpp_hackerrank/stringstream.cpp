/*
Strings - Hackerrank
Difficulty: Easy
Suggested Time Complexity: N/A
Topics covered: String Streams, Strings
Problem Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream

Editorial

*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> parsedInts = { };
    stringstream ss;
    ss << str;
    int temp = 0;
    while (!ss.eof())
    {
        if (ss.peek() != ',')
        {
            ss >> temp;
            parsedInts.push_back(temp);
        }
        else
            ss.get();
    }
    return parsedInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}