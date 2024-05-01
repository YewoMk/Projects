#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("input.txt");
    if (!outputFile) {
        cerr << "Error creating file.\n";
        return 1;
    }

    string statement = "This is the Advanced Computer Programming Module";
    outputFile << statement;
    outputFile.close();

}