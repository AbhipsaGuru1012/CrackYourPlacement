// link: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<string> s=strs;
        // sort(s.begin(), s.end());
        vector<vector<string>> v;
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    }
};