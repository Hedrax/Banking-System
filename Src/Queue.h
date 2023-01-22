#pragma once
#include "Customer.h"
#include "Node.h"
#include <iostream>
using namespace std;

class Queue
{
public:

	Node* front;
	Node* back;
	int size;
	Queue();
	void push(Customer);
	void pop();
};

