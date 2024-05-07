// swapping of numbers 
#include <iostream>
using namespace std;
void swapWithPointers(int* a, int* b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;     
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << std::endl;
    cout << "varB before swap: " << varB << std::endl;

    
    swapWithPointers(&varA, &varB);

    cout << "varA after swap: " << varA << std::endl;
    cout << "varB after swap: " << varB << std::endl;

    return 0;
}
