#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;   
        int stackPopCount = 0;
        void push(int x) {
            if (stack_oldest_on_top.empty() && stack_newest_on_top.empty()) {
                stack_oldest_on_top.push(x);
                stack_newest_on_top.push(x);
            } else if (!stack_oldest_on_top.empty()) { 
                stack_newest_on_top.push(x);
            }
        }

        void pop() {
            if (!stack_oldest_on_top.empty() && stack_newest_on_top.size() > 1) { 
                stack_oldest_on_top.pop();
                while (stack_newest_on_top.size()>1) {
                    stack_oldest_on_top.push(stack_newest_on_top.top());
                    stack_newest_on_top.pop();
                } //now we have the oldest on top with extras
                stack_newest_on_top.pop(); //should be empty now
                int oldest = stack_oldest_on_top.top();
                stack_oldest_on_top.pop();
                while (!stack_oldest_on_top.empty()) {
                    stack_newest_on_top.push(stack_oldest_on_top.top());
                    stack_oldest_on_top.pop();
                }
                stack_oldest_on_top.push(oldest);
            } else {
                stack_newest_on_top.pop();
                stack_oldest_on_top.pop();
            }
        }

        int front() {
            return stack_oldest_on_top.top();
        }
        void print() {
            cout << stack_oldest_on_top.top() << endl;
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}