#include "Module.h"

Module::Module(int numOfServers) {
	this->servers = numOfServers;
	this->que = Queue();
	fqTime = -1;
	numEvents = -1;
}
Module::Module() {
	servers = 0;
	que = Queue();
	fqTime = -1;
	numEvents = -1;
}