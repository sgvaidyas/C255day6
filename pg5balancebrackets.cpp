#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> brackets;
    bool valid = true;

    string s;
    cout << "Enter a string to check: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        // if not valid, break and update valid to false

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
        {
            brackets.push(s[i]);
        } 
		else if (s[i] == ')') 
		{
            char top = brackets.top();
            brackets.pop();
            if (top != '(') {
                valid = false;
                break;
            }
        } 
		else if (s[i] == '}') {
            char top = brackets.top();
            brackets.pop();
            if (top != '{') {
                valid = false;
                break;
            }
        }
        else if (s[i] == ']') {
            char top = brackets.top();
            brackets.pop();
            if (top != '[') {
                valid = false;
                break;
            }
        }
    }

    if (valid && brackets.empty()) {
        cout << "The string: " << s << " is valid\n";
    } else {
        cout << "The string: " << s << " is invalid\n";
    }

}

