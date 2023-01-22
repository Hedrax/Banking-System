#include "Queue.h"

Queue::Queue() {		
		front = nullptr;
		back = nullptr;
		size = 0;
}
void Queue::push(Customer value) {
	Node* n = new Node(value);
	if (!this->front) {
		this->front = n;
		this->back = n;
	}
	else
	{
		this->back->next = n;
		n->pre = this->back;
		this->back = n;
	}
	this->size++;
}
void Queue::pop() {
	if (!this->front)
	{
		cout << "can't pop queue is empty \n";
	}
	else if (this->front == this->back)
	{
		this->front = nullptr;
		this->back = nullptr;
	}
	else
	{
		this->front = this->front->next;
		this->front->pre = nullptr;
	}
	this->size--;
};