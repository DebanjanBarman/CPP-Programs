#include<iostream>
using namespace std;
int main(){
int len, n, i, pos, arr[100];

cout<<"Enter the size of the array:- ";
cin>>len;

cout<<"Enter array elements:- \n";

for(i=0;i<len;i++){
cin>>arr[i];
}

cout<<"Output\n";
for(i=0;i<len;i++){
cout<<arr[i]<<"\t";
}

cout<<"Enter the position where you want to insert:- ";
cin>>pos;

cout<<"Enter the number you want to insert:-";
cin>>n;

for(i=len;i>pos;i--){

arr[i]= arr[i-1];
}

arr[pos]=n;

cout<<"Final Output\n";
for(i=0;i<len+1;i++){
cout<<arr[i]<<"\t";
}
}
