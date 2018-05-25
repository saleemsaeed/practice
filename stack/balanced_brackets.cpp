#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool is_balanced(string expression) {
    stack<char> bracketStack;
    for (int i=0;i<expression.size();i++) {
        if      (expression[i] == '(') bracketStack.push(')');
        else if (expression[i] == '{') bracketStack.push('}');
        else if (expression[i] == '[') bracketStack.push(']');
        else if (!bracketStack.empty() && expression[i] == bracketStack.top()) bracketStack.pop();
        else    return false;
    }
    if (bracketStack.empty())
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}