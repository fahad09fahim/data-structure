#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int i, data, item;

    for (i = 0; i < n; i++)
    {

        cout << "Enter element at position " << i << ": ";
        cin >> arr[i];
    }

    cout << "which data do you want to update: ";
    cin >> data;
    cout << "Enter the new data: ";
    cin >> item;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            arr[i] = item;
        }
    }

    for (i = 0; i < n; i++)
    {

        cout << "Enter element at position " << i << ": " << arr[i] << endl;
    }
}