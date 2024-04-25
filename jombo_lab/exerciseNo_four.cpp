#include <iostream>
#include <limits> 
#include <ios>    

using namespace std;

int main() {
    int userInput_number;

    // Prompt the user to enter  an integer value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";
    
    // Keep prompting until a valid integer between 5 and 10 is entered
    while (!(cin >> userInput_number) || userInput_number< 5 || userInput_number > 10) {
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    // Output a message to inform the user that their input value has been accepted
    cout << "Your input value " << userInput_number << " has been accepted." << endl;

    return 0;
}