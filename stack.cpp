#include<iostream>
using namespace std;
#define MAXSIZE 10

int main(){

int n, top=0, stack[10];


if(top == MAXSIZE - 1){

	cout<<"The stack is full \n";

}

cout<<"Enter the value: "; 
cin>>n;

top+=1;

stack[top] = n;

cout<<stack[top];

return 0;
}
