#include "main.h"

Module machine = Module();
vector <Customer> lst;
int transactionTime = 1;
bool endProcess(string command) {
	if (command == "__END") return true;
	return false;
}

void excuteCommand(string command) {
	if (command == "__M") {
		machine = Module();
		serversModification(&machine);
	}
	else if (command == "__S") {
		int time = inputSimulationTime();
		machine.manualInput = lst;
		simulationCommand(time, &machine);
	}
	else if (command == "__M_AUTO")
		autoMaticModification(&machine);

	else if (command == "__M_MAN__ADD")
		manualModification(&lst);

	else if (command == "__M_MAN__CLR")
		lst.clear();

	else if (command == "__M_T")
		transactionModification(&transactionTime);

	else
		cout << "Invalid command\n";
}

int main() {
	string input;
	instructionsPrint();
	while (true)
	{
		cout << "Command: "; cin >> input; cout << '\n';
		if (endProcess(input))break;
		excuteCommand(input);
	}
	return 0;
}
