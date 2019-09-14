#include<iostream>

using namespace std;

int example();
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        example();
    }


}

int example() {
    static int  x = 10;
    x += 10;

    cout << x << "\t";
}