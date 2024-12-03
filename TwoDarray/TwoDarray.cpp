#include <iostream>
using namespace std;

int main()
{

    int r, c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    int arr[r][c], i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Element[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Array Elements are:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Elements[" << i << "][" << j << "]:" << arr[i][j] << endl;
        }
    }
}