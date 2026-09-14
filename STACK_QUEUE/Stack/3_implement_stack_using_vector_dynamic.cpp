#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> arr;

public:

    void push(int value) {
        arr.push_back(value);
    }

    void pop() {
        if (arr.empty()) {
            cout << "Stack underflow." << endl;
            return;
        }

        arr.pop_back();
    }

    void peek() {
        if (arr.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Top Element : " << arr.back() << endl;
    }

    bool isEmpty() {
        return arr.empty();
    }

    void display() {
        if (arr.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack : ";

        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}