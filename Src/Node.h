#pragma once
#include "Customer.h"
class Node
{
public:
	Node* pre;
	Node* next;
	Customer val;
	Node(Customer value);
};

