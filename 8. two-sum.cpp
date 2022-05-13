// link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> v1;
        v1=nums;
        vector<int> v;

        int m, k;
        for(int i=0;i<nums.size();i++){
            m=target-nums[i];
            std::vector<int>::iterator it;
            it = std::find (nums.begin()+i+1, nums.end(), m);
            if (it != nums.end()){
                v.push_back(i);
                k=i;
                break;
                
            }
        }
        cout<<m;
        for(int j=k+1;j<nums.size();j++){
            if(nums[j]==m){
                v.push_back(j);
                break;
            }
        }
        return v;
    }
};