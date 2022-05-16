// link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k=nums.size()/2;
        int s;
        int m=1;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                m++;
                if(m>k){
                    return nums[i];

                }
            }else{
                m=1;
            }
            
        }
        return 0;
    }
};