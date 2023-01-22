#pragma once
class Customer
{
public:
	static int count;
	int expectedArrivalTime;
	int actions;
	int id;
	Customer();
	Customer(int expectedTime, int actionsNum);
	bool operator < (Customer const& obj);
};
