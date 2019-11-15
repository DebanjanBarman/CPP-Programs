#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
	int info;
	struct node *next;

} *start;
class list
{
	public:
		node *create_node(int);
		void insert();
		void display();
		void insert_begin();
		void insert_end();
		void insert_pos();
		list()
		{
			start=NULL;
		}
};
main()
{
	int choice, node, element, pos, i;
	char ch;
	list sl;
	start=NULL;
	while(1)
	{
		cout<<"1. Insert node at beginning"<<endl;
		cout<<"2. Insert node at last"<<endl;
		cout<<"3. Insert node at given position"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"Enter your choice :"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Inserting node at beginning"<<endl;
				sl.insert_begin();
				break;
				case 2:
					cout<<"Inserting node at last"<<endl;
					sl.insert_end();
					break;
					case 3:
						cout<<"Inserting node at given position"<<endl;
						sl.insert_pos();
						break;
						case 4:
							sl.display();
							break;
							default:
								cout<<"Invalid Choice"<<endl;
								
		}
		cout<<"Do you want to continue ? (y/n)";
		cin>>ch;
	}
}

node *list::create_node(int value)
{
	struct node *temp, *s;
	temp=new(struct node);
	if(temp=NULL)
	{
		cout<<"Memory not available"<<endl;
		return 0;
	}
	else
	{
		temp->info=value;
		temp->next=NULL;
		return temp;
	}
}

void list::insert_begin()
{
	int value;
	cout<<"Enter the value to be inserted :"<<endl;
	cin>>value;
	struct node *temp, *p;
	temp=create_node(value);
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
	}
	else
	{
		p=start;
		start=temp;
		start->next=p;
	}
	cout<<"Elemnt inserted succesfully"<<endl;
	
}

void list::insert_end()
{
	int value;
	cout<<"Enter the value to be inserted :"<<endl;
	cin>>value;
	struct node *temp, *s;
	temp=create_node(value);
	s=start;
	while(s->next!=NULL)
	{
		s=s->next;
	}
	temp->next=NULL;
	s->next=temp;
	cout<<"Element insereted at last"<<endl;
	
}

void list::insert_pos()
{
	int value, pos, count=0;
	cout<<"Enter the value to be inserted :"<<endl;
	cin>>value;
	struct node *temp, *s, *ptr;
	temp=create_node(value);
	cout<<"Enter the position at which you want to insert :"<<endl;
	cin>>pos;
	int i;
	s=start;
	while(s!=NULL)
	{
		s=s->next;
		count++;
	}
	if(pos=1)
	{
		if(start=NULL)
		{
			start=temp;
			start->next=NULL;
		}
		else
		{
			ptr=start;
			start=temp;
			start->next=ptr;
		}
	}
	else if(pos>1 && pos<=count)
	{
		s=start;
		for(i=0;i<pos;i++)
		{
			ptr=s;
			s=s->next;
		}
		ptr->next=temp;
		temp->next=s;
	}
	else
	{
		cout<<"Position does not exixt"<<endl;
	}
}
void list::display()
{
	struct node *temp;
	if(start=NULL)
	{
		cout<<"The list is empty"<<endl;
		return;
		
	}
	temp=start;
	cout<<"Element of the list are: "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->info<<"->";
		temp=temp->next;
			}
			cout<<"NULL"<<endl;
}