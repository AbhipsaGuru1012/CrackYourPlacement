// link: https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxh;
        for(int i=0;i<nums.size();i++){
            maxh.push(nums[i]);
        }
        int m=1;
        while(maxh.size()>0){
            if(m==k){
                return maxh.top();
            }else{
                m++;
                maxh.pop();
            }
        }
        return 0;
    }
};