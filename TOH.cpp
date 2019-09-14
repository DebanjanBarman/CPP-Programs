#include<iostream>
using namespace std;
void TOH(int, char, char, char);
int main(){
    int n;
    cout<<"Enter the number of disk\n";
    cin>>n;

    cout<<"moves are\n\n";

    TOH(n, 'A','B','C');
}

void TOH(int n, char from, char to, char aux){
    if(n==1){
        cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    TOH(n-1,from,aux,to);
        cout<<"Move disk "<<n <<" from " <<from<<" to "<<to<<endl;
    TOH(n-1,aux,to,from);

}