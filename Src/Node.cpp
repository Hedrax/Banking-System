#include "Node.h"

Node::Node(Customer value){
		this->pre = nullptr;
		this->next = nullptr;
		this->val = value;
}