#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}


int countWords(const string& text) {
    int count = 0;
    bool inWord = false;
    for (char c : text) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}


string reverse(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}


string capitalizeSecondLetter(const string& text) {
    string result = text;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening file!\n";
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    inputFile.close();

    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    
    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    
    string reversedText = reverse(fileData);
    cout << "Reversed text: " << reversedText << endl;

    
    string capitalizedText = capitalizeSecondLetter(fileData);
    cout << "Capitalized text: " << capitalizedText << endl;

    return 0;
}
