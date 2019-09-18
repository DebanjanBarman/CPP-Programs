#include<iostream>

using namespace std;

#define MAX 10

int push();
int pop();
int traverse();
int top = -1, stack[MAX];

int main() {
    int n;
    while (1) {
        cout << "_____STACK MENU_____\n1-PUSH()\n2-POP()\n3-TRAVERSE()\n4-EXIT\n\n>>";
        cin >> n;

        switch (n) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);

            default:
                cout << "Wrong Choice\n\n";
                break;
        }
    }
}

int push(){

    if(top==MAX-1){
        cout<<"Stack is Full\n";
    }
    else
    {
        cout<<"Enter The Element\n";
        top+=1;
        cin>>stack[top];
    }
    

}
int pop(){
  if(top==-1){
        cout<<"Stack is Empty\n";
    }
    else
    {
        cout<<"Deleted Element is "<<stack[top]<<endl;
        top-=1;
    }
}
int traverse(){
    int i;
  if(top==-1){
        cout<<"Stack is Empty\n";
    }
    else
    {
        for (i= top; i >= 0;  i--)
        {
        cout<<stack[i]<<endl;
        }
        
        
    }
    
}