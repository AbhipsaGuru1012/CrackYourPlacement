// link: https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n){
                x=-1;
            }
            if(i!=(nums.size()-1) && (nums[i+1]!=nums[i]+1)){
                return nums[i]+1;
            }
            
        }
        if(x==0){
          return n;  
        }else{
            return 0;
        }
        
    }
};