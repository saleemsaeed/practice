#include <sstream>
#include "Person.h"

using namespace std;

Person::Person() {
	name = "";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
	cout << this << endl;

}

string Person::toString() {
	stringstream ss;
	ss << "Name : ";
	ss << name;
	ss << "; age : ";
	ss << age;

	return ss.str();
}