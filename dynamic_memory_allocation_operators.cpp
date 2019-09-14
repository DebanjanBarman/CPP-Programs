#include<iostream>

using namespace std;

int main() {
    int * num, len, i;

    cout << "Enter the Length of the array";
    cin >> len;

    num = new int(len);

    for (i = 0; i < len; i++) {

        num[i] =i;
        cout<<num[i]<<"\t";

    }
    cout<<"\n";

    delete []num;
    cout<<"Without assigning again \nWe get same output\n";
    num = new int(len);

    for(i=0;i<len;i++){
        cout<<num[i]<<"\t";

    }



}