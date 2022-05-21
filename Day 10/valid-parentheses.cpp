// link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            // cout<<typeid(s.at(i)).name();
            if(s.at(i)=='('){
                st.push(')');
            }else if(s.at(i)=='['){
                st.push(']');
            }else if(s.at(i)=='{'){
                st.push('}');
            }
            else if(!st.empty() && s.at(i)==st.top()){
                st.pop();
            }else{
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};