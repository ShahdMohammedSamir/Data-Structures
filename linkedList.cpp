#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;

};
node* head = NULL;
void insert(int value) {
	node* new_node = new node, * last;
	new_node->data = value;
	if (head == NULL) {
		head = new_node;
		new_node->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = new_node;
		new_node->next = NULL;

	}

}


void display() {
	node* current_node;
	if (head == NULL) {
		cout << "linked list is empty\n";
	}
	else {
		current_node = head;
		while (current_node != NULL) {
			cout << current_node->data << " ";
			current_node = current_node->next;
		}
	}
}

void del(int value) {
	node* current, * pre;
	current = head;
	pre = head;
	if (current->data == value) {
		head = current->next;
		free(current);
	}
	else{
		while (current->data != value) {
			pre = current;
			current = current->next;

		}
		pre->next = current->next;
		free(current);
	}
}
void search(int value) {
	node* current;
	current = head;
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



void insert_beg(int value) {
	node* new_node = new node;
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}


void del_beg() {
	if (head == NULL) {
		cout << "linked list is empty\n";
	}
	else {
		node* first_node = head;
		head = first_node->next;
		delete(first_node);

	}
}


void del_end() {
	if (head == NULL) {
		cout << "linked list is empty\n";
	}
	else if (head->next == NULL) {
		delete(head);
		head = NULL;
	}
	else {
		node* last = head;
		while (last->next->next != NULL) {
			last = last->next;
		}
		delete(last->next);
		last->next = NULL;
	}
}
int main()
{
	insert(10);
	insert(30);
	insert(40);
	display();
	del(30);
	search(30);
	search(40);
	display();
	del_end();
	display();
	del_beg();
	display();
	del_beg();
	insert_beg(6);
	display();



}

