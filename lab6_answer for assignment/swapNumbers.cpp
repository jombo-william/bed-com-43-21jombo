
// #include <iostream>
// #include <algorithm> 
// using namespace std;

// void swapnumbers(int& a, int& b) {
//     swap(a, b); 
// }

// int main() {
//     int varA = 25;
//     int varB = 100;

//     cout << "varA before swap: " << varA << endl;
//     cout << "varB before swap: " << varB << endl;

//     swapnumbers(varA, varB);

//     cout << "varA after swap: " << varA << endl;
//     cout << "varB after swap: " << varB << endl;

//     return 0;
// }
#include <iostream>

// Function to swap two integers using pointers
void swapWithPointers(int* a, int* b) {
    int temp = *a; // Store the value pointed to by 'a'
    *a = *b;       // Assign the value pointed to by 'b' to 'a'
    *b = temp;     // Assign the stored value to 'b'
}

int main() {
    int varA = 25;
    int varB = 100;

    std::cout << "varA before swap: " << varA << std::endl;
    std::cout << "varB before swap: " << varB << std::endl;

    // Pass the addresses of varA and varB to the swap function
    swapWithPointers(&varA, &varB);

    std::cout << "varA after swap: " << varA << std::endl;
    std::cout << "varB after swap: " << varB << std::endl;

    return 0;
}
