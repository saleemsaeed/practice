#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "George";
}

Person::~Person() {
	cout << "Person destroyed" << endl;
}

string Person::toString() {
	return "Person's name is: " + name;
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}