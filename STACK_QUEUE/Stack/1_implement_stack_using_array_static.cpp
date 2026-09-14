#include<iostream>
using namespace std;

#define size 10

class stack{
    int arr[size];
    int top;

    public:
        stack(){
            top = -1;
        }

    void push(int value){
        if(top >= size-1){
            cout << "Stack overflow" << endl;
            return;
        }
        top = top+1;
        arr[top] = value;
    }

    void pop(){
        if(top == -1){
            cout << "stack underflow" << endl;
            return;
        }
        top = top-1;
    }

    void peek(){
        if(top == -1){
            cout << "stack is empty" << endl;
            return ;
        }
        cout << "Top element : " << arr[top] << endl;
    }

    bool isFull(){
        return top == size-1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void display(){
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack : ";
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){

    stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.peek();

    s.pop();

    s.peek();

    s.display();
}