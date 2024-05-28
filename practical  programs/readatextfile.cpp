

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    // Open the file for reading
    ifstream myfile("example.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    } else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}