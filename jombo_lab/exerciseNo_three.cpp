#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize the array name jombo with string elements
    string jombo[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(jombo) / sizeof(jombo[0]);

    // Iterate through each element of the array
    for (int i = 0; i < size; ++i) {
        
        if (jombo[i][0] == 'B') {
            
            cout << jombo[i] << endl;
        }
    }

    return 0;
}
/*In the code you’ve provided, line 9 is crucial because it calculates the size of the jombo array by dividing the
 total size of the array by the size of its first element. This line determines how many times the for loop will iterate.
  If you remove this line, the program won’t know the number of elements in the jombo array, and the for loop will not function correctly.

Here’s the specific line for clarity:

int size = sizeof(jombo) / sizeof(jombo[0]);

This line is calculating the number of elements in the jombo array by dividing the total 
size in bytes of the jombo array by the size in bytes of a single element (jombo[0]). It’s 
a common way to determine the length of an array in C++ when the array is not dynamically
 allocated. So, it’s best to keep this line in your code. 😊*/