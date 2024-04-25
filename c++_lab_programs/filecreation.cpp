#include <iostream>
#include <fstream>
 
 using namespace std;
 int main () {
    //creating and open a text file
    ofstream myfile("examplefile.txt");
    // close the file
    myfile.close();
    return 0;
 }