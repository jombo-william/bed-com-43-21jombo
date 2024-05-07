#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Prompt user for integer input
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Output the dynamically allocated integer
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt user for string input
    cout << "Enter a string value: ";
    cin.ignore(); // Clear newline from previous input
    getline(cin, *dynamicString);

    // Output the dynamically allocated string
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    // Deallocate memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}