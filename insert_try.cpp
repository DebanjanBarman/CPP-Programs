#include<iostream>
using namespace std;
int main(){

int len, pos, n;

cout<<"Enter the size of the array:- \n";
cin>>len;

int a[len], i;
cout<<"Enter the elements of the array:- \n";
for(i=0;i<len;i++){

cin>>a[i];
}
cout<<"Output:- \n";
for(i=0;i<len;i++){

cout<<a[i]<<endl;
}

cout<<"Enter the indexed position where you want to insert:- \n";
cin>>pos;
cout<<"Enter the number:- \n";
cin>>n;

for(i=len;i>pos;i--){
     a[i] = a[i - 1];
}
    a[pos] = n;


cout<<"Output:- \n";
for(i=0;i<=len;i++){

cout<<a[i]<<endl;
}

}
