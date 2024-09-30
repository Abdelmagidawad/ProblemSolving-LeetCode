
Problem Name: Length of Last Word

Problem on leetcode: https://leetcode.com/problems/length-of-last-word/

Solve Problem Using C++ :

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '&& count!=0){
                break;
            }else if(s[i]!=' '){
                count++;
            }
        }
        return count;
    }
};