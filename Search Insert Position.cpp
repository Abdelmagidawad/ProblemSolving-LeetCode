Problem Name: Search Insert Position

Problem on leetcode: https://leetcode.com/problems/search-insert-position/


Solve Problem :

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
             int mid=(l+h)/2;
            if(nums[mid]==target)
                return mid; 
            if(nums[mid]>target) 
                h=mid-1;
            else 
                l=mid+1;
        }
       return l;
    }    
};
