#include <iostream>
using namespace std;

int main() {
    int rows, cols;

   
    do {
        cout << "Enter the number of rows (max 3): ";
        cin >> rows;
        if (rows <= 0 || rows > 3) {
            cout << "Invalid input! Please enter a number between 1 and 3.\n";
        }
    } while (rows <= 0 || rows > 3);

    do {
        cout << "Enter the number of columns (max 3): ";
        cin >> cols;
        if (cols <= 0 || cols > 3) {
            cout << "Invalid input! Please enter a number between 1 and 3.\n";
        }
    } while (cols <= 0 || cols > 3);

    
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array2D[i][j];
        }
    }

    
    cout << "\nValues of each element of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array2D[i][j] << " ";
        }
        cout << "\n";
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
