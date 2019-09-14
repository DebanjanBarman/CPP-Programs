#include<iostream>

using namespace std;
int main() {
    int arr[100], len, i, pos, n;

    cout << "Enter the length of the array:-";
    cin >> len;

    cout << "Enter the elements of the array:-";
    for (i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "Output:-\n";
    for (i = 0; i < len; i++) {
        cout << arr[i] << "\t";
    }
    cout<<"Enter the indexed position:- \n";
    cin>>pos;

    for (i = pos; i <len; i++) {
        arr[i]=arr[i+1];
    }


    cout << "Final Output:-\n";
    for (i = 0; i < len-1; i++) {
        cout << arr[i] << "\t";
    }
    

}