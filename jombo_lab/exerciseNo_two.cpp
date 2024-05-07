// this code generates random numbers using the switch statements 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int days_reman= rand() % 12; 
 
    switch (days_reman) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
            
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;

        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << days_reman << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:

            break;

        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
    
}
