#include <iostream>

using namespace std;

int main()
{
    int a[3][3], n, item, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "data[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    cout << "Which data do you want to search:";
    cin >> item;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == item)
            {
                break;
            }
        }
        break;
    }
    if (i == 0 && j == 3)
    {
        cout << "Data has not found";
    }
    else
    {
        cout << "Data has found at position:" << i << "\t" << j << endl;
    }

    return 0;
}