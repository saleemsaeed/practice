#include <string>
#include <vector>
#include <iostream>

using namespace std;

void bubbleSort(vector<int> a, int n) {
    int temp;
    int swap=0;
    bool isSorted = false;
    while (!isSorted) {
        isSorted = true;
        for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                //swap(a[j], a[j + 1]);
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
                isSorted=false;
            }
        }
    }
    cout << "Array is sorted in " << swap << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    bubbleSort(a, n);
    return 0;
}