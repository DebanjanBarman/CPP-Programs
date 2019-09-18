#include<iostream>

using namespace std;

#define MAX 10

int enqueue();
int dequeue();
int traverse();
int front = -1,rear=0, queue[MAX];

int main() {
    int n;
    while (1) {
        cout << "_____QUEUE MENU_____\n1-ENQUEUE()\n2-DEQUEUE()\n3-TRAVERSE()\n4-EXIT\n\n>>";
        cin >> n;

        switch (n) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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

int enqueue(){

    if(rear==MAX){
        cout<<"Queue is Full\n";
    }
    else
    {
        front=0;
        cout<<"Enter The Element\n";
        cin>>queue[rear];
        rear+=1;
    }
    

}
int dequeue(){
  if(front==-1){
        cout<<"Queue is Empty\n";
    }
    else
    {
        cout<<"Deleted Element is "<<queue[front]<<endl;
        front+=1;
    }
}
int traverse(){
    int i;
  if(front==-1){
        cout<<"Queue is Empty\n";
    }
    else
    {
        for (i= rear-1; i >= front;  i--)
        {
        cout<<queue[i]<<endl;
        }
        
        
    }
    
}
