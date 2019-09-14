#include<iostream>
using namespace std;
int main(){
	int n, i,f=0,j=0;

	for(n=3;n<1000000;n++){
	for(i=2;i<=n/2;i++){
	  if(n%i==0){
		f=1;
		break;
	  }
	}
	if(f==0){

		j++;
		cout<<n<<"  "<<j<<"\n";
	  }

	}
 }
