// this code create the array jombo and sellects those words with B
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string jombo[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(jombo) / sizeof(jombo[0]);

   
    for (int i = 0; i < size; ++i) {
        
        if (jombo[i][0] == 'B') {
            
            cout << jombo[i] << endl;
        }
    }

    return 0;
}
