#include <iostream>

using namespace std;

#define MAX 10

int push();
int pop();
int display();
int top = -1, stack[MAX];

int main() {
    int opt;

    while (1) {

        cout << "_____Stack menu_____\n1 for push\n2 for pop\n3 for display\n4 for exit\n\n";
        cin >> opt;
        switch (opt) {
            case 1:
                 push();
                break;
            case 2:
                 pop();
                break;
            case 3:
                 display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Wrong choice\n";
                break;
        }
    }

}

int push() {
    int val;

    if (top == MAX - 1) {
        cout << "Stack is full";
    } else {
        cout << "Enter element to push ";
        cin >> val;
        top += 1;
        stack[top] = val;
    }

}
int pop() {
    int val;

    if (top == -1) {
        cout << "Stack is empty";
    } else {
        cout << "Deleted element " << stack[top];
        top -= 1;
    }

}
int display() {
    int i;

    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout<<"Output\n";
        for (i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }

}