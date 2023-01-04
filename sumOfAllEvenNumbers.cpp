#include <iostream>
using namespace std;

int main () {
    int counter = 1;
    int userInput = 0;
    double evenNumbers = 0;

do {
    cout << "Enter number: ";
    cin >> userInput;

    if ( userInput % 2==0){
        counter = counter + 1;
        evenNumbers = evenNumbers + userInput;

    }
    else {
        counter = counter + 1;
    }
    }
    while (counter <=10);

    cout << "\nThe sum of all even numbers: " << evenNumbers <<endl;



    return 0;
}
