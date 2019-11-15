#include<iostream>
using namespace std;

class student{
    public:
        int id, age;
        char name;
        void getdata();
        void display_data();
};
void student::getdata(){
    cin>>id>>name>>age;

}
void student::display_data(){
    cout<<id<<name<<age;
}

int main(){
    student s[20];
    int n;
    cout<<"Enter the limit\n";
    cin>>n;

    cout<<"id \t name \t age";

    for(int i =0;i<n;i++){
        s[i].getdata();
    }

    for(int i =0;i<n;i++){
        s[i].display_data();
    }

    return 0;
}