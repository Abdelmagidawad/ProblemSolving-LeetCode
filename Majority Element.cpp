Problem Name: Majority Element

Problem on leetcode: https://leetcode.com/problems/majority-element/

Solve Problem:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        return nums[mid];
        
    }
};