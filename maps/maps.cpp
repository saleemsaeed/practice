#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> ages;
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;
	ages["Mike"] = 70;
	cout << ages["Raj"] << endl;
	//cout << ages["Sue"] << endl;  // creates a new element named Sue value 0
 	//pair<string, int> addToMap("Peter",100);
 	//ages.insert(addToMap);
	ages.insert()

	if(ages.find("Vicky1") != ages.end()) {	//search for Vicky1
		cout <<"Found Vicky1" << endl;
	}
	else { 
		cout << "Key not found" << endl;
	}
	
	for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}

	for(map<string,int>::iterator it=ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

 }