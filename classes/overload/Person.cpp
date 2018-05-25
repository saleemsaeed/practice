#include <sstream>
#include "Person.h"

using namespace std;

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}

string Person::toString() {
	stringstream ss;
	ss << "Name : ";
	ss << name;
	ss << "; age : ";
	ss << age;

	return ss.str();
}