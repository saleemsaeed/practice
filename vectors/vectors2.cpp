#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> numbers(0);
	cout << "Size: " << numbers.size() << endl;
	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i=0; i<10000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}
	numbers.clear();
	
	cout << numbers[2] << endl;
	numbers.resize(500);
	numbers.reserve(100000);
	cout << "Size: " << numbers.size() << endl;	// how many things are actually in it
	cout << "Capacity: " << numbers.capacity() << endl;		// space reserved in memory so far for it

	return 0;
}