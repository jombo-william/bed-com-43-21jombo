// code to prompt the user to generate random number and display the message depending on the codition 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));
    int days_remaining = rand() % 12; 

    
    if ( days_remaining <= 0) {
        cout << "Your subscription has expired." << endl;
    } else if ( days_remaining <= 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if ( days_remaining <= 5) {
        cout << "Your subscription expires in " <<  days_remaining << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if ( days_remaining <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
