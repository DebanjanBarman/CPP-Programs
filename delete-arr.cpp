#include <iostream>

using namespace std;

int main()
{

    int n,pos,i,arr[50],no;

    cout << "Enter the no of elements: ";
    cin >> n;

    cout << "Enter the Numbers: \n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nDisplaying Output: \n\n";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Enter the position where you want to delete: ";
    cin >> pos;

    for (i = pos; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    cout << "\nFinal Output: \n\n";
    for (i = n - 2; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}