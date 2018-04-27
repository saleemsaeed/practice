#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)	// align data on single byte boundaries
struct Person{
	char name[50];	//50
	int age;		//4
	double height;	//8
};
#pragma pack(pop)

int main() {
	Person someone = {"Frodo", 220, 0.8};
	//cout << sizeof(Person) << endl;	
	string fileName ="test.bin";
	
	//// WRITE BINARY FILE

	ofstream outputFile;
	outputFile.open(fileName, ios::binary);	//prevent c++ from reading data as chars
	if(outputFile.is_open()) {
		//outputFile.write((char *)&someone, sizeof(Person)); //address if struct variable
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person)); //address if struct variable
		outputFile.close();
	}
	else {
		cout << "Could not create file " + fileName;
	}
	
	//// READ BINARY FILE

	Person someoneElse = {};

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);	//prevent c++ from reading data as chars
	if(inputFile.is_open()) {
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person)); //address if struct variable
		inputFile.close();
	}
	else {
		cout << "Could not read file " + fileName;
	}

	cout << someoneElse.name << ", " << someone.age << ", " << someoneElse.height << endl;

	return 0;
}