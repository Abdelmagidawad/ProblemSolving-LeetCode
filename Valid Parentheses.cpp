
Problem Name: Valid Parentheses

Problem on leetcode: https://leetcode.com/problems/valid-parentheses/

Solve Problem Using C++:

class Solution {
public:
    bool arepair(char open , char close) {
    
    if (open == '{' && close == '}')
        return true;
    else if (open == '(' && close == ')')
        return true;
    else if (open == '[' && close == ']')
        return true;
    else    return false;
}

    bool isValid(string ex) {
          stack<char> s;
    for (int i = 0; i < ex.size(); i++) {

        if (ex[i] == '{' || ex[i] == '(' || ex[i] == '[')
            s.push(ex[i]);

        else if (ex[i] == '}' || ex[i] == ')' || ex[i] == ']') {
            if (s.empty() || !arepair(s.top(), ex[i]))
                return false;
            else
                s.pop();
        }
   }
    return s.empty() ? true:false;

    }
};