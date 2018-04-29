#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person();
	~Person();
	string toString();
	void setName(string newName);
	string getName();
};

#endif