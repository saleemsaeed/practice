#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int number_needed(string a, string b) {
	//cout << a.size() << endl;
	//cout << b.size() << endl;
	vector<int> letterCounter(26,0);
	int sum = 0;
	for (int i=0;i<a.size();i++) {letterCounter[int(a[i]-'a')]++;}
	for (int i=0;i<b.size();i++) {letterCounter[int(b[i]-'a')]--;}
	for (vector<int>::iterator it=letterCounter.begin();it!=letterCounter.end();it++) {sum+=abs(*it);}
	return sum;
}

int main(){
	string a;
	cin >> a;
	string b;
	cin >> b;
	cout << number_needed(a, b) << endl;
	return 0;
}