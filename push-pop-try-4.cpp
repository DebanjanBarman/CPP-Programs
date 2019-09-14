#include<iostream>

using namespace std;

#define MAX 10
int stack[MAX], top = -1;

int push();
int pop();
int display();

int main() {
    int n;

    cout << "_____Stack Menu_____\n\n\n1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\n\n>>";
    cin >> n;
    while (1) {


        switch (n) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                exit(0);
        }

    }
}


int push(){
    int num;
    if(top ==MAX){
        cout<<"STACK is full\n";
        return 0;
    }
    else{
        cout<<"Enter the number you want to push";
        cin>>num;
        top+=1;
        stack[top]=num;
    }
}
int pop(){

    if(top ==-1){
        cout<<"STACK is Empty\n";
        return 0;
    }
    else{
        cout<<"Deleted element "<<stack[top]<<endl;
        top-=1;
    }

}

int display(){
    int num;
    if(top ==-1){
        cout<<"STACK is Empty\n";
        return 0;
    }
    else{
        for(num=0;num<MAX;num++){
            cout<<stack[top]<<endl;
        }
    }
}
