#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {5, 4, 2, 1};
    int N = 4, index = 2, data = 3;

    //  run the loop before insert of  the array
    for (int i = 0; i < N; i++)
    {
        cout << "Elements[" << i << "]:" << arr[i] << endl;
    }
    // create space for new elements
    for (int i = N; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    // push data into array
    arr[index] = data;
    // increase array size
    N++;
    // again run the loop of  the array elements
    cout << "Array after insertion:" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Elements[" << i << "]:" << arr[i] << endl;
    }
}