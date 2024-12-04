#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter row size:";
    cin >> r;
    cout << "Enter coloum size:";
    cin >> c;
    int a[r][c];
    int k = 0, R, C;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Element[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    int item;
    cout << "Enter the item to search: ";
    cin >> item;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == item)
            {
                k += 1;
                R = i;
                C = j;
            }
        }
    }

    if (k == 0)
    {
        cout << "Not found";
    }
    else
    {
        cout << " Found at position: " << R << C << " Cell";
    }
    return 0;
}