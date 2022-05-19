// link: https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.length();
        for(int i=0;i<haystack.length();i++){
            if(haystack.at(i)==needle.at(0)){
                string str=haystack.substr(i,m);
                // cout<<str<<endl;
                if(str==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};