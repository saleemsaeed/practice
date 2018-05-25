#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

void bubbleSort(vector<int> a) {
    int temp;
    bool isSorted = false;
    int numSwaps=0;
    while (!isSorted) {
        isSorted=true;
        for (int i=0; i<a.size()-1;i++) {
            if (a[i]>a[i+1]) {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                isSorted=false;
                numSwaps++;
            }
        }
    }
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First element: " << a[0] << endl;
    cout << "Last element: " << a[a.size()-1] << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    // Write Your Code Here
    bubbleSort(a);
    return 0;
}