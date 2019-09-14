#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n,r,sum=0,c,temp,i,len=0,count;

cout<<"Enter the number_  ";
cin>>n;
count=n;
temp=n;
while(count>0){

count = count/10;

len++;

}

while(n>0){

r = n%10;
c = pow(r,len);
sum=sum+c;
n=n/10;


}

if(sum==temp){

cout<<temp<<" Is an armstrong number";
}
else{
cout<<temp<<" Is not an armstrong number";
}

}
