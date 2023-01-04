/*
Enter number: 5
 5  5  5  5  5  5  5  5  5
 4  _  _  _  4  _  _  _  4
 3  _  _  _  3  _  _  _  3
 2  _  _  _  2  _  _  _  2
 1  1  1  1  *  1  1  1  1
 2  _  _  _  2  _  _  _  2
 3  _  _  _  3  _  _  _  3
 4  _  _  _  4  _  _  _  4
 5  5  5  5  5  5  5  5  5
*/

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter number: ";
    cin >> userInput;

    int temp = userInput;
    int lineChecker = 1;

    do
    {
        for(int loop = 0; loop < (userInput*2)-1; loop++)
            {
                if(temp == 1 || temp == userInput)
                {
                    if(temp == 1 && loop == userInput-1 )
                    {
                        cout<< " * ";
                    }
                    else
                    {
                         cout << " " << temp << " ";
                    }

                }
                else if(loop <= 0 || loop == userInput-1 || loop == (userInput*2)-2)
                {
                    cout << " " << temp << " ";
                }
                else
                {
                    cout << " _ ";
                }
            }
        cout << "\n";

        if( userInput > lineChecker)
            {
                temp--;
            }
        else if(userInput < lineChecker+1)
            {
                temp++;
            }

        lineChecker++;
    }
    while(lineChecker <= ((userInput*2)-1));


    return 0;
}
