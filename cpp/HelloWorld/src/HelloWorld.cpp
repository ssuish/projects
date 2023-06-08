#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "and also from the C++17 standard!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    // Used to pause the program before exiting
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get();

    return 0;
}