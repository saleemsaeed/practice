#include <iostream>
using namespace std;


class Test {
public:
	static int const MAX = 99; 

private:
	int id;
	static int count;

public:
	Test() {
		id = ++count;
	}

	int getId() {
		return id;
	}

	static void showInfo() {
		cout << count << endl;
	}
};

int Test::count = 0;

int main() {
	Test test1;
	cout << test1.getId() << endl;
	Test test2;
	cout << test2.getId() << endl;
	cout << Test::MAX << endl;
	Test::showInfo();

	return 0;
}