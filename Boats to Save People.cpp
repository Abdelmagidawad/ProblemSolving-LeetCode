
Problem Name: Boats to Save People

problem on Leetcode: https://leetcode.com/problems/boats-to-save-people/


Solve Problem:

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        sort(people.begin(),people.end());
        int c=0;
        while(i<=j){
            if((people[i]+people[j])<=limit){
                i++,j--;
                c++;
            }else if(people[j]>=limit){
                j--;
                c++;
            }else if((people[i]+people[j])>limit){
                j--;
                c++;
            }
            
        }
        return c;
    }
};