#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;
  
public:
  	int maximumDifference;

  	// Add your code here
    Difference(vector<int> a) {elements=a;}
    void computeDifference() {
		int smallestNumber=*elements.begin();
  		int largestNumber=smallestNumber;
  		for (vector<int>::iterator it=elements.begin();it!=elements.end();it++)
    	{
    		if (*it<smallestNumber) {smallestNumber=*it;}
    		else if (*it>largestNumber) {largestNumber=*it;}
    	}
    	maximumDifference=largestNumber - smallestNumber;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}