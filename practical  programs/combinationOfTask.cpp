#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function prototypes
void checkSubscription();
void checkSubscriptionSwitch();
void processArray();
void promptForInteger();
void calculateArea();
void readFile(const string& filename, string& fileData);
int countVowels(const string& str);
int countWords(const string& str);
string reverseString(const string& str);
string capitalizeSecondLetter(const string& str);

int main() {
    // Call each function sequentially
    checkSubscription();
    checkSubscriptionSwitch();
    processArray();
    promptForInteger();
    calculateArea();

    // File for readFile function
    string filename = "textfile.txt";
    string fileData;
    
    // Read file
    readFile(filename, fileData);
    
    // Calculate number of vowels
    int vowels = countVowels(fileData);
    cout << "Number of vowels: " << vowels << endl;
    
    // Calculate number of words
    int words = countWords(fileData);
    cout << "Number of words: " << words << endl;
    
    // Reverse the string
    string reversed = reverseString(fileData);
    cout << "Reversed string: " << reversed << endl;
    
    // Capitalize second letters
    string capitalized = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letters: " << capitalized << endl;

    return 0;
}

void checkSubscription() {
    int daysUntilExpiration = rand() % 12;
    cout << "Days until expiration: " << daysUntilExpiration << endl;
    
    if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }
}

void checkSubscriptionSwitch() {
    int daysUntilExpiration = rand() % 12;
    cout << "Days until expiration: " << daysUntilExpiration << endl;
    
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 2 ... 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
            break;
        case 6 ... 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }
}

void processArray() {
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    for (const string& element : elements) {
        if (element[0] == 'B') {
            cout << element << endl;
        }
    }
}

void promptForInteger() {
    int userInput;
    
    do {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userInput;
        
        if (userInput >= 5 && userInput <= 10) {
            cout << "Your input value " << userInput << " has been accepted." << endl;
        } else {
            cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
        }
    } while (userInput < 5 || userInput > 10);
}

void calculateArea() {
    // Code for calculating area of shapes
}

void readFile(const string& filename, string& fileData) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        exit(1);
    }
    getline(file, fileData);
    file.close();
}

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    return count(str.begin(), str.end(), ' ') + 1;
}

string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = true;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}