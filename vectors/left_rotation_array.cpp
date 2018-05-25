#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    vector<int> newVector;
    k=k%a.size();
    cout << k << endl;
    for(int i = k; i < a.size();i++)
       newVector.push_back(a[i]);
    for(int i = 0; i < k;i++)
       newVector.push_back(a[i]);
    return newVector;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n); //input vector
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}