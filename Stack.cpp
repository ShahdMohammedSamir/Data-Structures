#include <iostream>
using namespace std;
# define size 6
int stack[size], top = -1;
bool empty() {
    if (top == -1) {
       
        return true;
    }
    else {
       
        return false;

    }
}
bool full() {
    if (top == size - 1) {
       
        return true;
    }
    else {
       
        return false;
    }
}
void push(int num) {
    if (!full()) {
        top += 1;
        stack[top] = num;
        cout << "done\n";

    }
    else {
        cout << "stack is full\n";
    }
}
void pop() {
    if (!empty()) {
        top -= 1;
        cout << "done\n";
    }
    else{

        cout << "stack is empty\n";
    }
}

void display() {
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << "\n";
    }
}


int main()
{
   cout<< empty()<<"\n";
    push(4);
    push(5);
    push(8);
    push(0); 
    push(3);
    push(12);
    push(99);
    display();
    cout<<full()<<"\n";
    pop();
    display();
    cout << full() << "\n";
    push(6);
    display();

}
       