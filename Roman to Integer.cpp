Problem Name: Roman to Integer

Problem on leetcode: https://leetcode.com/problems/roman-to-integer/


Solve Problem :

class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        map<char , int>mp={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]])
                result-=mp[s[i]];
            else
                result+=mp[s[i]];
        }
        return result;
    }
};