#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {2, 3, 4, 5};
    int n = 4, data = 1, i;

    // before insertion run the loop
    for (i = 0; i < n; i++)
    {
        cout << "Element:[" << i << "]:" << arr[i] << endl;
    }
    // create space for the beginning of the array
    for (i = n; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = data;
    n++;

    // after insertion run the loop
    cout << "After insertion run the loop" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Element:[" << i << "]:" << arr[i] << endl;
    }
}

/*
after given index
for(i = N; i>= index + 1; i--) {
array[i + 1] = array[i];
}
// add new element at first position
array[index + 1] = value;


before given index
// now shift rest of the elements downwards
for(i = N; i >= index - 1; i--) {
array[i + 1] = array[i];
}
// add new element at first position
array[index - 1] = value;
*/