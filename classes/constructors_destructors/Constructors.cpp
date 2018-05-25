#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	{
		Cat jim;
		jim.speak();
	}
	{
		Cat bob;
		bob.speak();
	}
	cout << "Ending program" << endl;
	return 0;
}