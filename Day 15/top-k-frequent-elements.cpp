// link: https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> v;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > minh;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }else{
                mp[nums[i]]++;
            }
        }
        unordered_map<int,int>::iterator it;
        for(auto it:mp){
            minh.push(make_pair(it.second, it.first));
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(minh.size()>0){
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
    }
}; 