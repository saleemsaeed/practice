#include <iostream>
#include <vector>
using namespace std;

int lonely_integer(vector < int > a) {
    int result = 0;
    for (vector<int>::iterator it=a.begin(); it!=a.end();it++) {
        //cout << result << " xor " << *it << " = "; cout << int(result^*it); cout << endl;
        result ^= *it;
    }
    //cout << endl;
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
