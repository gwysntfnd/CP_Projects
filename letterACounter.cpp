#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    char charChecker = 'a';
    int charCount = 0;

    cout << "Enter a word: ";
    cin >> userInput;

    for (int i = 0; i < userInput.size(); i++) {
        if (userInput[i] == charChecker) {
            charCount++;
        }
    }

    cout << "The number of " << charChecker << "'s in the given: " << charCount;

    return 0;
}
