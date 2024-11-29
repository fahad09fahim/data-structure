#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j;
    cout << "Enter the number of Rows:";
    cin >> r;
    cout << "Enter the number of Columns:";
    cin >> c;

    // initialize array size with user input
    int arr[r][c];

    // inserting array elements using for loop
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element at position [" << i << "," << j << "] : ";
            cin >> arr[i][j];
        }
    }

    // display array elements
    cout << "Array data elements are:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Element[" << i << "," << j << "]:" << arr[i][j] << endl;
        }
    }
    return 0;
}