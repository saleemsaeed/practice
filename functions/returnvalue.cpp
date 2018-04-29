#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int processSelection() {
	cout << "Enter selection: " << endl;
	int input;
	cin >> input;
	return input;
}

int main() {
	showMenu();
	int selection = processSelection();
	switch (selection) {
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
	return 0;
}