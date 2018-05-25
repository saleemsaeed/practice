#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <iomanip>
using namespace std;

double median(vector<int> b){
    sort(b.begin(),b.end());
    int numElements = b.size();
    //cout << "size of 'a' so far: " << b.size() << endl;
    double thisMedian;
    if (b.size()%2==0) { //even
        //cout << "val " << (numElements/2)-1 << "+" << (numElements/2) << endl;
        //cout << "med " << b[(numElements/2)-1] << "+" << b[(numElements/2)] << endl;
        thisMedian = double(b[(numElements/2)-1]+b[(numElements/2)])/2.0;
    } else { //odd
        //cout << "val " << (numElements/2) << endl;
        //cout << "med " << b[(numElements/2)-1] << endl;
        thisMedian = double(b[(numElements/2)]);
    }
    //cout << endl;
    return thisMedian;
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    queue<double> runningMedians;
    int reader;
    //cout <<endl;
    for(int a_i = 0;a_i < n;a_i++){
        cin >> reader;
        a.push_back(reader);
        runningMedians.push(median(a));
    }
    //cout << endl;
    while (!runningMedians.empty()) {
        cout << fixed << setprecision(1) << runningMedians.front() << endl;
        runningMedians.pop();
    }
    return 0;
}
