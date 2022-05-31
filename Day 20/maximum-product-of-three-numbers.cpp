// link: https://leetcode.com/problems/maximum-product-of-three-numbers/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int mx=max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3], nums[0]*nums[1]*nums[nums.size()-1]);
        return mx;
    }
};