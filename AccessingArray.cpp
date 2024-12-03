#include <iostream>
using namespace std;

int main()
{

    int arr[50], n, i, j;
    cout << "how many data you want to insert: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Element[" << i << "]:";
        cin >> arr[i];
    }
    cout << "Array Data elements are:" << endl;
    for (j = 1; j <= n; j++)
    {
        cout << "Elements[" << j << "]: " << arr[j] << endl;
    }
}