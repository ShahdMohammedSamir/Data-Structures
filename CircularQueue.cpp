#include <iostream>
#include <vector>
using namespace std;
#define size 6
vector<int>queue(size);
int tail = -1;
int head = -1;
bool empty() {
    return((tail == -1 && head == -1) ) ? true : false;
}
bool full() {
    return ((head == 0 && tail == size - 1) || (head == tail + 1)) ? true : false;
}

void enqueue(int num) {
    if (full()) {
        cout << " the queue is full";
    }
    else if (empty()) {
        head++;
        tail ++;
        queue[tail] = num;
    }
    else {
        tail = (tail + 1) % size;
        queue[tail] = num;
    }
}
void dequeue() {
    if (!empty()) {
        if (head == size - 1) {
            head = 0;
        }
        else if (head == tail) {
            head = tail = -1;
        }
        else {
            head++;
        }
    }
    else {
        cout << "queue is empty";
    }
}
void display() {

    if (!empty()) {
        if (head <= tail) {
            for (int i = head; i <= tail; i++) {
                cout << queue[i] << "\n";
            }
        }
        else {
            for (int i = head; i < size; i++) {
                cout << queue[i] << "\n";
            }
            for (int i = 0; i < tail; i++) {
                cout << queue[i] << "\n";
            }
        }
    }
}
int main()
{
    cout << empty();
    enqueue(9);
    enqueue(3);
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(6);

    enqueue(1);
    cout<<full();

    dequeue();
    cout << full();

    enqueue(1);
    cout << full();

  
}

