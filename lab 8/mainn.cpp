#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    // Overloaded + operator
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;

    // Overloaded relational operators
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }

    // Conversion operators
    int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

    string janeFirstName = Jane;
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's Weight: " << janeWeight << endl;

    return 0;
}
