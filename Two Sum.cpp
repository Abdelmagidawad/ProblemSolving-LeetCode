Problem Name: Two Sum

Problem on leetcode: https://leetcode.com/problems/two-sum/description/

Solve Problem using c++ :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>V;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i]+nums[j]==target){
                   V.push_back(i);
                   V.push_back(j);
               }
           }
        }
        return V;
    }
};