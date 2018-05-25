#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> phonenum;
    int N;
    cin >> N;
    string name;
    int phone;
    for (int i=0; i<N; i++) {
        cin >> name;
        cin >> phone;
        pair<string,int> addToMap(name,phone);
        phonenum.insert(addToMap);
    }
    //for(map<string,int>::iterator it=phonenum.begin(); it != phonenum.end(); it++) {
        //pair<string,int> dict = *it;
        //cout << dict.first << "=" << dict.second << endl;
    //}
    string queryname;
    while(cin >> queryname) {
        if(phonenum.find(queryname) != phonenum.end()) {
            cout << queryname << "=" << phonenum[queryname] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}