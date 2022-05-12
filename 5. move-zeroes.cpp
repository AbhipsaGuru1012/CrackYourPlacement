// link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==0){
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                n=n-1;
                continue;
            }else{
                i++;
            }
        }
    }
};