#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[999999999999999999];
        delete [] pMemory;
    }
};

int main() {
    CanGoWrong wrong;
    cout << "here" << endl;
    return 0;
}
