#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if (top == 4)
        cout << "Overflow\n";
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Underflow\n";
    else
        cout<< stack[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Empty\n";
    else
        cout<< stack[top] << endl;
}

void display() {
    if (top == -1)
        cout << "Empty\n";
    else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main() {
    int x;

    cout << "Enter 3 values: ";
    for (int i = 0; i < 3; i++) {
        cin >> x;
        push(x);
    }

    display();
    peek();
    pop();
    display();

    return 0;
}