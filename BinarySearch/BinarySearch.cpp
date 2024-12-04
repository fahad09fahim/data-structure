#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    int h = n, l = 1, mid;

    // Input elements into the array
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    mid = (h + l) / 2;
    int item;
    cout << "Enter the element to search: ";
    cin >> item;
    for (int i = 1; i <= n; i++)
    {
        if (arr[mid] > item)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = (h + l) / 2;
    }
    if (arr[mid] == item)
    {
        cout << "Element found at index: " << mid;
    }
    else
    {
        cout << "Element not found in the array";
    }
    return 0;
}