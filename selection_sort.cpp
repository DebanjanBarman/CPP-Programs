#include<iostream>
using namespace std;
int main(){
    int n[50],size, min, loc,temp;

    cout<<"Enter the array size:\n";

    cin>>size;

    cout<<"Enter Array elements\n";

    for (int i = 0; i < size; i++)
    {
        cin>>n[i];
        
    }

    cout<<"Output Without sorting \n";

    for (int i = 0; i < size; i++)
    {
        cout<<n[i]<<endl;
        
    }
        cout<<"Output After sorting \n";

    for(int i=0; i<=size; i++){
        min = n[i];
        loc = i;

            for (int  j = 0; j < size-1; j++)
            {
                if(n[j]<min){
                    min = n[i];
                    loc = i;
                }
                if(loc!=1){
                    temp = n[i];

                    n[i]= n[loc];
                    n[loc]=temp;
                }
            }
        cout<<n[i]<<endl;
    }
}