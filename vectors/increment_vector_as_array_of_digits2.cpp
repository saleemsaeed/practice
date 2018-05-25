#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int> &A) {
	vector<int> V;
	int n = A.size();
	cout << "n = " << n << endl;
	int count = 0; 
	for(int i=n-1;i>=0;i--){
		if(A[i]==9) {
		count++;
		cout << "count = " << count << endl;
		}
		else break;
	}
	if(count == n){ //if they are all 9 then you know the increment answer
		V.push_back(1);
		for(int i=1;i<=n;i++) V.push_back(0);
	}
	else{
		int l = n-count-1;
		cout << "l = " << l << endl;
		int flag = 0;
		for(int i=0;i<l;i++) {
			if(A[i]!=0 || (flag!=0 && A[i]==0)) {
				flag = 1;cout<<A[i]<<" ";
			} else if(A[i]==0 && flag == 0);
		}

		cout<<A[l] + 1<<" ";
		for(int i=1;i<=count;i++) {
			cout<<"0 ";
		}
	}
	
	return V;
}


int main(){
	vector<int> input_arr{8, 8, 9, 9, 9};
	vector<int> output_arr = plusOne(input_arr);
	cout << endl;
	for (vector<int>::iterator it=output_arr.begin();it != output_arr.end(); it++) {
		cout << *it;
	}
	cout <<endl;
	return 0;
}