#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;

};
node* top = NULL;

void display() {
	node* current_node;
	if (top == NULL) {
		cout << "linked list is empty\n";
	}
	else {
		current_node =top;
		while (current_node != NULL) {
			cout << current_node->data << " ";
			current_node = current_node->next;
		}
		cout << "\n";
	}
}
void search(int value) {
	node* current;
	current = top;
	while (current != NULL && current->data != value) {
		current = current->next;
	}
	if (current != NULL) {
		cout << "the element found\n";
	}
	else {
		cout << "the element not found\n";
	}
}



void push(int value) {
	node* new_node = new node;
	new_node->data = value;
	new_node->next = top;
	top= new_node;
}


void pop() {
	if (top == NULL) {
		cout << "stack is empty\n";
	}
	else {
		node* first_node =top;
		top = first_node->next;
		delete(first_node);


	}
}
void peek() {
	if (top == NULL) {
		cout << "stack is empty\n";
	}
	else {
		cout << top->data;
	
	}

}

int main()
{

	push(1);
	push(2);
	push(3);
	push(4);
	display();
	pop();
	pop();
	search(4);
	search(1);
	display();
	peek();



}

