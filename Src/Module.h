#pragma once
#include "Queue.h"
#include <Vector>
class Module {
public:
	int servers;
	Queue que;
	int fqTime;
	int numEvents;
	vector <Customer> manualInput;
	Module(int);
	Module();
};
