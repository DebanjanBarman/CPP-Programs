#include<iostream>
using namespace std;
int main(){
    int i,n, sum=0;

    for(n=1;n<=1000;n++){
        sum=0;
        for(i=1;i<n;i++){
            if(n%i==0){
              sum=sum+i;
            }
        }
        if(n==sum){
            cout<<n<<" is a perfect number\n";
        }
    }
    
}