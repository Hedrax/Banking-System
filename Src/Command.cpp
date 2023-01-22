#include "Command.h"

void serversModification(Module* machine) {
	machine->servers = serversInput();
}
void simulationCommand(int SimulationTime, Module* machine) {
	Simulation(SimulationTime, machine);
}
void manualModification(vector <Customer> *lst) {
	int numElements;
	manualInput(&numElements);
	for (int i{ 0 }; i < numElements; i++) {
		int arrivalTime, events;
		manualInput(&arrivalTime, &events);
		lst->push_back(Customer(arrivalTime, events));
	}
	sort(lst->begin(), lst->end());
}
void autoMaticModification(Module* machine) {
	int fqTime, numEvents;
	automaticInput(&fqTime, &numEvents);
	machine->fqTime = fqTime;
	machine->numEvents = numEvents;
};