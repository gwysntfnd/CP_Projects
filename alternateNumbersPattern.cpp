/*
Enter number: 5
15151
51515
15151
51515
15151
*/

#include <iostream>
using namespace std;

int main()
{
    int userNum;
	int checker = 1;

	cout << "Enter number: ";
	cin >> userNum;

    for (int loop = userNum; loop > 0; loop--){
    for ( int temp = userNum; temp > 0; temp --){
	if (checker == 1) {
		cout << "1";
		checker = 0;
	}
	else {
		cout << userNum;
		checker = 1;
		}
    }
    cout << "\n";
    }


    return 0;
}
