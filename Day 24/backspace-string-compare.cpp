// link: https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st1;
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='#'){
                st.push(s.at(i));
            }else if(s.at(i)=='#'){
                if(st.empty()){
                    continue;
                }else{
                    st.pop();
                }
            }
        }
        for(int i=0;i<t.length();i++){
            if(t.at(i)!='#'){
                st1.push(t.at(i));
            }else if(t.at(i)=='#'){
                if(st1.empty()){
                    continue;
                }else{
                    st1.pop();
                }
            }
        }
        if(st==st1){
            return true;
        }
        return false;
    }
};