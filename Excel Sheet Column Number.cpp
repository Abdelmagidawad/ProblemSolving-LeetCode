Problem Name: Excel Sheet Column Number

problem on Leetcode: https://leetcode.com/problems/excel-sheet-column-number/


Solve Problem:

class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        if(columnTitle.size()==1)
            return (columnTitle[0]-'A')+1;
        int x=0;
        for(int i=0;i<columnTitle.size();i++)
        {
            x*=26;
            x+=columnTitle[i]-'A'+1;
        }
        
        return x;
    } 
    
};