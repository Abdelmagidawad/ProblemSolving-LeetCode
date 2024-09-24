Problem Name: Search in Rotated Sorted Array
Problem on leetcode: https://leetcode.com/problems/search-in-rotated-sorted-array/description/

Solve Problem:

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int st=0,end=nums.size()-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(nums[mid]==target) return mid;
            if(nums[st]<=nums[mid]){
                if(target>=nums[st]&&target<nums[mid]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
                
            }else{
                if(target>nums[mid]&&target<=nums[end]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
        
    }
};