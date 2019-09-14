#include<iostream>

using namespace std;
int main() {
    int arr[100], i, n, len, pos;

    cout << "Enter the length of the array:- ";
    cin >> len;

    cout << "Enter the elements of the array:- ";
    for (i = 0; i < len; i++) {
        cin>>arr[i];
    }

    cout<<"Output:-\n";
    for (i = 0; i < len; i++) {
        cout<<arr[i]<<"\t";
    }

    cout<<"Enter the position:- ";
    cin>>pos;

    cout<<"Enter the number:-";
    cin>>n;

    for ( i = len; i > pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=n;


    cout<<"Final Output:-\n";
    for (i = 0; i <= len; i++) {
        cout<<arr[i]<<"\t";
    }

}