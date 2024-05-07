//entering user input number between 5 and 10

#include <iostream>
#include <limits> 
#include <ios>    

using namespace std;

int main() {
    int userInput_number;

    
    cout << "Please enter an integer value between 5 and 10: ";
    
    
    while (!(cin >> userInput_number) || userInput_number< 5 || userInput_number > 10) {
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }


    cout << "Your input value " << userInput_number << " has been accepted." << endl;

    return 0;
}
