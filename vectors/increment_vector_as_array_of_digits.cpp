#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int> &A) {
	//if the last digit is a 9, change to 0 and move to second to last digit
		//recursion?
	//else, add 1 to last digit


	vector<int> newVector = A;
	newVector.back()++; //increment the last number
	cout << "Last digit now is " << newVector.back() << endl;
	int carry=0;
	for (vector<int>::iterator it=newVector.end();it != newVector.begin();) {
	//start at the end
		it--;
		*it=*it+carry;
		//cout << "This is where I am " << *it << endl;
		if (*it > 9) {
			//cout << "must carry" << endl;
			*it=0;
			carry=1;
			//cout << "Now I must increment " << endl;
		} else {
			//newVector[*it]; 
			it = newVector.begin();
		}
	}

	reverse(newVector.begin(),newVector.end());
	for (vector<int>::iterator it=newVector.end();it != newVector.begin();) {
		it--;
		if (*it == 0) {
			newVector.pop_back(); 
		} else {
			it = newVector.begin();
		}
	}
	reverse(newVector.begin(),newVector.end());
	return newVector;
}



int main(){
	vector<int> input_arr{0, 1, 2, 9, 9};
	vector<int> output_arr = plusOne(input_arr);
	cout << endl;
	for (vector<int>::iterator it=output_arr.begin();it != output_arr.end(); it++) {
		cout << *it;
	}
	cout <<endl;
	return 0;
}