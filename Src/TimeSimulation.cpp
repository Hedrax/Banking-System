#include "TimeSimulation.h"
// the simulation takes a Module to run the simulation on, and the time for simulating

bool check(Module* machine, int currTime) {
	for (int i{ 0 }; i < machine->servers; i++) {
		cout << "at minute " << currTime << '\n';
		if (!machine->que.size)
		{
			printServer(-1, i + 1);
		}
		else if (!machine->que.front->val.actions) { machine->que.pop(); }
		else {
			machine->que.front->val.actions--;
			printServer(machine->que.front->val.id, i + 1);
		}
	}
	if (!machine->que.size) return false;
	return true;
}

void checkingComingCustomers(Module* machine, int currTime) {
	int fqTime = machine->fqTime;
	if (fqTime != -1 && !(currTime % fqTime))
		machine->que.push(Customer(currTime, machine->numEvents));
	if (!machine->manualInput.empty())
		if (machine->manualInput.front().expectedArrivalTime <= currTime)
			while (true) {
				Customer curr = machine->manualInput.front();
				if (curr.expectedArrivalTime > currTime) break;
				machine->manualInput.erase(machine->manualInput.begin());
				machine->que.push(curr);
			}
}

void Simulation(int SimulationTime, Module* machine) {
	bool serverIncreamentAdvice = false;
	for (int j{ 0 }; j < SimulationTime; j++) {
		checkingComingCustomers(machine, j);
		serverIncreamentAdvice = check(machine, j);
		printBreakPoint();
	}
	if (serverIncreamentAdvice) printAdvice();
}