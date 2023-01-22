#include "InputTemplete.h"

void manualInput(int* arrivalTime, int* events) {
	cout << "Arrival time: "; cin >> *arrivalTime;
	cout << "\nNumber of actions needed by the customer "; cin >> *events;
	cout << '\n';
}
void manualInput(int* numElements) {
	cout << "Number of customers: ";
	cin >> *numElements;
	cout << '\n';
}
int serversInput() {
	int num;
	cout << "Number of servers of the Module: ";
	cin >> num;
	cout << '\n';
	return num;
}
void automaticInput(int* fqTime, int* numEvents) {
	cout << "Frequnt time for customers to come: ";
	cin >> *fqTime;
	if (*fqTime != -1) {
		cout << "\nNumber of actions for each customer: ";
		cin >> *numEvents;
	}
	cout << "\n";
}
int inputSimulationTime() {
	int num;
	cout << "Enter the wanted simulation time in mins: "; cin >> num; cout << '\n';
	return num;
}

int transactionInput()
{
	int num;
	cout << "Enter the wanted Transaction time /action: "; cin >> num; cout << '\n';
}
