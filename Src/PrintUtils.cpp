#include "PrintUtils.h"
using namespace std;

void printAdvice(){
	cout << "Number of servers are not enough to handle the customer proparly\n"
		<< "Please consider increamenting the number of the servers \n";
}
void printServer(int customerNumber, int serverNumber) {
	if (customerNumber == -1) { cout << "Server " << serverNumber << " : Idle \n"; }
	else { cout << "Server " << serverNumber << " : customer" << customerNumber << '\n'; }
}
void printBreakPoint() {
	cout << "----------------------------------------------------------------------------\n";
}
void instructionsPrint() {
	cout << "Instructions\n"
		<< "__M			 -->To create a new case of testing\n"
		<< "__S			 -->To initiate Simulation for the case you created\n"
		<< "__M_AUTO		-->To Modify the frequent time of arriving customers and AVG actions per customer\n"
		<< "__M_MAN__ADD		-->To Add know arrival time customers to the system\n"
		<< "__M_MAN__CLR		-->To Clear the known customers with expected arrival time\n"
		<< "__END			--> to end process\n";
}