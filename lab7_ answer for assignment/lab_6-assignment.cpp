#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt user for dimensions (rows and columns)
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum allowed rows is 3. Using 3 rows." << endl;
        rows = 3;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum allowed columns is 3. Using 3 columns." << endl;
        cols = 3;
    }

    // Dynamically allocate a 2D array of doubles
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assign values to each element
    double value = 1.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = value++;
        }
    }

    // Output the values of each element
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}