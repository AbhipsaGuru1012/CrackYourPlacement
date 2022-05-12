// link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m=nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[nums.size()-1]+1;
                m--;
                
            }
        }
        sort(nums.begin(), nums.end());
        return m;
    }
};