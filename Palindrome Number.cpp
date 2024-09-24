Problem Name: Palindrome Number

problem on Leetcode: https://leetcode.com/problems/palindrome-number/


Solve Problem:

class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x),z;
        for(int i=(y.size()-1);i>=0;i--) z+=y[i];
        bool a=true;
        for(int i=0;i<y.size();i++){
            if(y[i]!=z[i]){
                a=false;
                break;
            }
        }
        if(a) return true;
        else return false;
    }
};