#include<iostream>
using namespace std;

void push(){

int item;
if(top== MAXSIZE-1){

cout<<"The Stack is full";
getch();
exit(0);

}
else{

cout<<"Enter the element to be inserted: ";
cin>>item;

top+=1;
stack[top] = item;
}

}
