#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin >> T;
    vector<string> strings;
    int count=0;
    string word;
    while(count<T) {
        cin >> word;
        strings.push_back(word);
        count++;
    } 
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        string mystring=*it;
        vector<char> evens;
        vector<char> odds;
        for (int i=0; i<mystring.size(); i++) {
            if (i%2 == 0) {
                evens.push_back(mystring[i]);
            } else {
                odds.push_back(mystring[i]);
            }
        }
        for (vector<char>::iterator it = evens.begin(); it != evens.end(); it++) {
            cout << *it;
        }
        cout << " ";
        for (vector<char>::iterator it = odds.begin(); it != odds.end(); it++) {
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}