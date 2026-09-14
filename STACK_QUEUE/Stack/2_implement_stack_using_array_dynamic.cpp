#include<iostream>
using namespace std;

class stack{
    int* arr;
    int size;
    int top;

    public:
        stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        ~stack(){
            delete[] arr;
        }

        void push(int value){
            if(top>=size-1){
                cout << "stack overflow." << endl;
                return;
            }
            top++;
            arr[top] = value;
        }

        void pop(){
            if(top==-1){
                cout << "stack underflow." << endl;
                return;
            }
            top--;
        }

        void peek(){
            if(top==-1){
                cout << "stack is empty. " << endl;
                return;
            }
            cout << " Top Element : " << arr[top] << endl;
        }

        bool isEmpty(){
            return top == -1;
        }
        bool isFull(){
            return top == size-1;
        }

        void display(){
            if(isEmpty()){
                cout << "Stack is empty." << endl;
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

    stack s(6);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.peek();

    s.display();

    s.pop();

    s.peek();
    
    s.display();
}