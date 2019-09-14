#include <iostream>
using namespace std;
int sum(int);
int  main(){
    int x,n;
    cout<<"Enter number- ";
    cin>>n;

    cout<<"Sum of first "<<n<<" Numbers is "<< sum(n)<<endl;

}
int sum(int n){
    if(n==0){
        return 0 ;
    }

    else
    {
        return (n + sum(n-1));
    }

}