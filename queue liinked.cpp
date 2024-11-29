#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head = NULL;
node* tail = NULL;

void enqueue(int value)
{
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = tail = new_node;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}
}
void dequeue()
{
	if (tail == NULL)
		cout << "queue is empty/n";
	else if (head == tail)
	{
		node* ptr = head;
		head = tail = NULL;
		delete(ptr);
	}
	else
	{
		node* ptr = head;
		head = head->next;
		delete(ptr);
	}
}
void display()
{
	if (tail == NULL)
		cout << "queue is empty/n";
	else
	{
		node* current = head;
		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
}


int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	dequeue();
	dequeue();
	display();
	enqueue(7);
	enqueue(9);
	display();
}

