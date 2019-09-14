#include <iostream>
using namespace std;
 
int main () {

   int color;

	cout<<"Enter case no";
	cin>>color;

   switch(color) {
      case 1 :
         cout << "Red" << endl; 
         break;
      case 2 :
	cout << "Green" << endl; 
         break;
      case 3 :
         cout << "Blue" << endl;
         break;
      case 4 :
         cout << "Cyan" << endl;
         break;
      case 5 :
         cout << "Mazenda" << endl;
         break;
      default :
         cout << "Invalid color" << endl;
   }

 
   return 0;
}
