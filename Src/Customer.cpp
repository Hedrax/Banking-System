#include "Customer.h"

Customer::Customer() {
	this->id = count;
	this->actions = 0;
	this->expectedArrivalTime = 0;
}

Customer::Customer(int expectedTime, int actionsNum)
{
	Customer::count++;
	this->id = count;
	this->actions = actionsNum;
	this->expectedArrivalTime = expectedTime;
}
bool Customer::operator<(Customer const& obj)
{
	return this->expectedArrivalTime < obj.expectedArrivalTime;
}
int Customer::count = 0;