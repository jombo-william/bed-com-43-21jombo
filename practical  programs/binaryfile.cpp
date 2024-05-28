// reading an entire binary file 
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char* memblock;
    streampos size;

    ifstream file("example.bin", ios::binary | ios::ate); 
    if (file.is_open()) {
        size = file.tellg();
        memblock = new char[size]; 
        file.seekg(0, ios::beg); 
        file.read(memblock, size); 
        file.close(); 
        cout << "The entire file content is in memory." << endl;
        
        delete[] memblock;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}