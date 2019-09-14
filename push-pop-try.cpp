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
		cout << "\n -----Stack Menu-----\n1_push()\n2_pop()\n3_display\n4_exit\n";
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
				cout << "\nWrong Choice!!";
		}
	}
}

int push() {

	int val;

	if (top == MAX - 1) {
		cout << "\nStack is full!!";
	} else {
		cout << "\nEnter element to push:";
		cin >> val;
		top = top + 1;
		stack[top] = val;
	}
}
int pop() {

	if (top == -1) {
		cout << "\nStack is empty!!";
	} else {
		cout << "\nDeleted element is " << stack[top];
		top = top - 1;
	}
}
int display() {

	int i;
	if (top == -1) {
		cout << "\nStack is empty!!";
	} else {
		cout << "\nStack is...\n";
		for (i = top; i >= 0; --i)
			cout << stack[i] << "\n";
	}
}