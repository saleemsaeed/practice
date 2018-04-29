#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput() {
	cout << "Enter selection: " << endl;
	int input;
	cin >> input;
	return input;
}

void processSelection(int option) {
	switch (option) {
		case 1:
			cout << "searching..." << endl;
			break;
		case 2:
			cout << "viewing..." << endl;
			break;
		case 3:
			cout << "quitting..." << endl;
			break;
		default:
			cout << "please select an item from the menu" << endl;
	}
}

int main() {
	showMenu();
	int selection = getInput();
	processSelection(selection);
	return 0;
}