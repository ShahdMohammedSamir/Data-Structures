#include <iostream>
#include <vector>
using namespace std;
#define size 6
vector<int>queue(size);
int tail = -1;
int head = -1;
bool empty() {
    return((tail == -1 && head == -1) || head > tail) ? true : false;
}
bool full() {
    return (tail == size-1) ? true : false;
}

void enqueue(int num) {
    if (!full()) {
        if (tail == -1 && head == -1) {
            tail++;
            head++;
            queue[tail] = num;
        }
        else {
            tail++;
            queue[tail] = num;
        }
    }
    else {
        cout << "the queue is full";
    }
}
void dequeue() {
    if (!empty()) {
        head++;
    }
    else {
        cout << "the queue is empty";
    }
}
void show() {

    if (!empty()) {
        for (int i = head; i <= tail; i++) {
            cout << queue[i] << "\n";
        }
    }
    else {
        cout << "the queue is empty";
    }
}
int main() {

    cout << empty();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    dequeue();
    show();



    return 0;
}