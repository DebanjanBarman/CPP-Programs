#include<iostream>
using namespace std;
int main()
{
    int a[100],i,pos,len;

    cout<<"Enter the length of the array:-";
    cin>>len;

    cout<<"Enter array elements:-\n";
    for ( i = 0; i < len; i++)
    {
        cin>>a[i];
    }
    cout<<"Output:-\n";
    for ( i = 0; i < len; i++)
    {
        cout<<a[i]<<"\t";
    }

    cout<<"Enter the position where you want to delete:-";
    cin>>pos;

    for ( i = pos; i <len ; i++)
    {
        a[i]=a[i+1];
    }
    

    cout<<"Final optput-\n";
    for ( i = 0; i < len-1; i++)
    {
        cout<<a[i]<<"\t";
    }
    
    
} 
