#include <iostream>
#include <cctype>

using namespace std;
int main()
{
    int userPin, checkPin, newPin;
    char userStart;

    cout << "At The Moment \n";
    cout << "[A]Create New \n";
    cout << "[B]Existing Account \n";
    cin >> userStart;
    userStart = toupper(userStart);

    userPin = 12345;

    switch (userStart) {
    case 'A':
        cout << "Enter Old Pin: ";
        cin >> checkPin;
        if (checkPin == userPin) {
            cout << "Enter New Pin: ";
            cin >> newPin;
            userPin = newPin;
            checkPin = userPin;
        }
        else
            cout << "Old Pin was Incorrect, Try again later. \n";

        break;

    case 'B':
        cout << "Enter Pin: ";
        cin >> checkPin;

        if (checkPin != userPin)

        cout << "Pin was Incorrect, Try again later. \n";

        break;

    default:
        cout << "Invalid Input";
        break;
    }

    while (checkPin == userPin) {

    int confirmPin;
    cout << "Confirm pin: ";
    cin >> confirmPin;

    if (confirmPin == userPin) {

    int showBalance, userCashIn, userCashOut;
    int userAction = 0;

    showBalance = 500;

    while (userAction != 4 ) {

    cout << "-- Welcome to At The Moment -- \n";
    cout << "[1]Check Balance \n";
    cout << "[2]Cash In \n";
    cout << "[3]Cash Out \n";
    cout << "[4]Exit \n";
    cin >> userAction;

    if (userAction == 1) {
        cout << "Balance: " << showBalance <<endl;
    }
    else if (userAction == 2) {
        cout << "Enter cash amount: ";
        cin >> userCashIn;
        showBalance += userCashIn;
    }
    else if (userAction == 3) {
        cout << "Enter cash amount: ";
        cin >> userCashOut;

        if (showBalance>userCashOut){
            showBalance -= userCashOut;
        }
        else if (userCashOut>showBalance) {
            cout << "Insufficient Balance. Action Terminated.\n";
        }
        else {
            cout << "Invalid Input.";
        }

    }
    else {
        cout << "Thank you!";
        checkPin = false;

    }

    }

}
else {
    cout << "Your pin doesnt match.";
}
}

    return 0;
}
