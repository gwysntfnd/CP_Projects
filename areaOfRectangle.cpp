#include <iostream>

using namespace std;

int main()
{
    int l, w, area;

    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    if (l>=1 && w>=1){
        area = l*w;
        cout << "The area of the rectangle: " << area;
    }

    else {
        cout << "Invalid number.";

    }


    return 0;
}
