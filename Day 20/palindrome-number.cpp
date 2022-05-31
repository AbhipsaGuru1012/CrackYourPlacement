// link: https://leetcode.com/problems/palindrome-number/submissions/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str="";
        while(x>0){
            str=str+to_string(x%10);
            x=x/10;
        }
        string str1=str;
        reverse(str.begin(), str.end());
        if(str==str1){
            return true;
        }else{
            return false;
        }
    }
};