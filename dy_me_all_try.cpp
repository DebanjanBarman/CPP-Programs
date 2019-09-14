#include<iostream>

using namespace std;
int main() {
    int * num, i, len;

    cout << "Enter the length of the array- ";
    cin >> len;

    num = new int(len);

    for (i = 0; i < len; i++) {
        num[i] = i;
        cout << num[i] << "\t";
    }

    delete[] num;


    cout << "Without assigning again\nWeget same output\n";
    num = new int(len);

    for (i = 0; i < len; i++) {
        cout << num[i] << "\t";
    }

}