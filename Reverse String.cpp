
Problem Name: Reverse String

Problem on leetcode: https://leetcode.com/problems/reverse-string/

Solve Problem :

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        // int i=0;
        // int j=s.size()-1;
        char temp;
        for(int i=0;i<(s.size())/2;i++){
            temp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=temp;
        
        }
    }
};