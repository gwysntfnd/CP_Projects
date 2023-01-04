#include <iostream>
using namespace std;

int main() {

	int userInput, linePrinted;

	cout << "Enter number: ";
	cin >> userInput;

    int temp = 1;
    int underScore = userInput-1;

    do
    {
        for(int loop1 = 0; loop1 < underScore; loop1++)
        {
            cout << " _ ";
        }


        for(int loop2 = 0; loop2 < (temp*2)-1; loop2++)
        {
            if(loop2 == 0 || loop2 == (temp*2)-2)
            {
                cout << " " << temp << " ";
            }
            else if(temp == userInput)
                {
                    cout << " " << temp << " ";
                }
            else
            {
                cout << " * ";
            }

        }

        cout << "\n";

        underScore--;
        temp++;
        linePrinted++;
    }
    while(userInput > linePrinted);

	for (int twoStem = 2; twoStem > 0; twoStem--){
	for (int temp = userInput - 1; temp > 0; temp --) {
	cout << " _ ";
	}
	cout << " 1 ";
	cout << "\n";
	}

	for (int underScoreStem = userInput/2; underScoreStem >0; underScoreStem--) {
		cout << " _ ";
		}
	for (int bottomStem = userInput; bottomStem > 0; bottomStem--){
	cout << " 1 ";
	}

	return 0;
	}
