#include <queue>
#include <string>
#include <iostream>

using namespace std;

queue<int> convert(int n) {
	static queue<int> remainder; //keep the same queue for all of the recursive calls
	remainder.push(n%2);
	int m = n/2;
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
			//cout << "match" << endl;
		} else {
			if (oneCounter>maxOnes) {
				//cout << "reset" << endl;
				maxOnes=oneCounter;
				//oneCounter=0;
			}
			oneCounter=0;
			
		}
		remainder.pop();
	}
	if (oneCounter>maxOnes) {
		maxOnes=oneCounter;
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
    cout << ones << endl;
    return 0;
}