#include <iostream>
using namespace std;
//You can use const prefix to declare constants with a specific type.
// constants are variables that need no to change in the program 

int main() {
 const int LENGTH = 10;
 const int WIDTH = 5;
 const char NEWLINE = '\n';
 int area; 
 
 area = LENGTH * WIDTH;
 cout << area;
 cout << NEWLINE;
 return 0;
 // so length, width and newline are constants in this program 
}