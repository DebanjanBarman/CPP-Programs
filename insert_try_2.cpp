#include<iostream>
using namespace std;

int main(){

int len,i ,pos, n;

cout<<"Enter the Length of the array\n";
cin>>len;

int a[len];


cout<<"Enter the Elements of the array\n";

for(i=0;i<len;i++){
cin>>a[i];
}


cout<<"Output\n";

for(i=0;i<len;i++){
cout<<a[i]<<"\t";
}

cout<<"\nEnter the position whrwe you want to insert\n";
cin>>pos;
cout<<"Enter the number";
cin>>n;


for(i=len;i>pos;i--){
    a[i] = a[i-1];
}
a[pos] = n;

cout<<"Final Output\n";

for(i=0;i<=len;i++){
cout<<a[i]<<"\t";
}


}
