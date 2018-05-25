#include <queue>
#include <string>
#include <iostream>

using namespace std;

queue<int> convert(int n) {
	static queue<int> remainder; //keep the same queue for all of the recursive calls
	cout << n << " ";
	int m = n/2;
	cout << m << "R" << m%2 << endl;
	remainder.push(m%2);
	if (m>0) {
		remainder = convert(m);
	} 
	return remainder;
}

int countOnes(queue<int> remainder) {
	int maxOnes=0;
	int oneCounter=0;
	while (!remainder.empty()) {
		cout << remainder.front();
		if (remainder.front()==1) {
			oneCounter++;
		} else {
			if (oneCounter>maxOnes) {
				maxOnes=oneCounter;
			}
			oneCounter=0;
		}
		remainder.pop();
	}
	cout << endl;
	return maxOnes;
}

int main(){
	cout << "Enter the number you want to convert to binary: ";
    int n;
    queue<int> remainder;
    int ones = 0;
    cin >> n;
    remainder = convert(n);
    ones = countOnes(remainder);
    cout << "Number of ones: " << ones << endl;
    return 0;
}