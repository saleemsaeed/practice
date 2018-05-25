#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int A[],int n, int x) {
	int low=0, high=n-1;
	while (low<=high) {
		int mid = (low+high)/2;
		if (x == A[mid]) return mid;
		else if (x<A[mid]) high = mid-1;
		else low = mid+1;
	}
	return -1;
}

//int recursiveBinarySearch(int A[],int n, int x) {


//}

int main() {
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
	int num;
	cout << "Which number do you want to find?: ";
	cin >> num;
	int index = binarySearch(A,8,num);
	if (index != -1 ) cout << "Your number is at index " << index << endl;
	else cout << "Number not found " << num << endl; 
	return 0;
}