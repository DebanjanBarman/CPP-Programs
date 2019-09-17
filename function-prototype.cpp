#include<iostream>
using namespace std;
int findArea();
int main(){
    cout<<findArea()<<endl;
}

int findArea(){
    int length, width;
    cout<<"Enter Length and Width\n";
    cin>>length>>width;
    cout<<"Square is ";
    return (length*width);
}