#include<iostream>
#include<string>
using namespace std;

class binary
{
 	string a;
 	public:
			void read()
			{
				cout<<"enter a binary number\n";
				cin>>a;
			}

			void check()
			{
				read();
				
				
				for (int i=0;i<a.length();i++)
				{
					if(a[i]!='0' && a[i]!='1')
						cout<<"not a binary number\n";
				}
			}

			void compliment()
			{
				check();
				
			for(int i=0;i<a.length();i++)
			{
				if(a[i]=='0')
				
					a[i]='1';
				else
					
					a[i]='0';                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
			}
			}

			void display()
			{
				compliment();
				cout<<"the compliment of the binary number is:\n"<<a<<endl;
			}
};

int main()
{
	binary l;
	l.display();
}
