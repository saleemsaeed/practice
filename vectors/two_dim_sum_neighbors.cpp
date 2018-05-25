#include <string>
#include <vector>
#include <iostream>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cout << arr[arr_i][arr_j];
       }
       cout << endl;
    }

    int hourglassSum;
    int maxSum=-100;
	for(int sum_i = 0; sum_i<4;sum_i++) {
	    for(int sum_j = 0; sum_j<4;sum_j++) {
	    	hourglassSum = arr[sum_i+0][sum_j+0] + arr[sum_i+0][sum_j+1] + arr[sum_i+0][sum_j+2] + arr[sum_i+1][sum_j+1] + arr[sum_i+2][sum_j+0] + arr[sum_i+2][sum_j+1] + arr[sum_i+2][sum_j+2];
	    	cout << sum_i << "," << sum_j << " hourglassSum = " << hourglassSum << endl;
	    	if (hourglassSum>maxSum) {maxSum=hourglassSum;}
	    }
	}
	cout << maxSum << endl;
    return 0;
}