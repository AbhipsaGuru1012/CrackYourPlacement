// link: https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[0]>nums[1]){
                return 0;
            }else if(nums[nums.size()-2]<nums[nums.size()-1]){
                return nums.size()-1;
            }else if(i!=0 && i!=nums.size()-1){
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    return i;
                }
            }
        }
        return -1;
    }
};