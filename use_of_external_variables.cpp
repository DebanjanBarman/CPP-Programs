#include<iostream>
using namespace std;
int external();
int n;
int main(){

extern int n;

n = 10;

cout<<n<<"\n";

external();
}

int external(){
    extern int n ;
    n+=50;
    cout<<n<<"\n";
}