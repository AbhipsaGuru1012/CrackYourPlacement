// link: https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str="";
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(str!=""){
                v.push_back(str);
                    v.push_back(" ");
                }
                
                str="";
            }else{
                str=str+s[i];
            }
            
        }
        if(str!=""){
            v.push_back(str);
        }
        reverse(v.begin(), v.end());
        int j=0;
        while(v[j]==" "){
            cout<<"true";
            v.erase(v.begin());
            // j++;
        }
        while(v[v.size()-1]==" "){
            cout<<"true";
            v.pop_back();
            
        }
        // cout<<v.size();
        
        for(int i=0;i<v.size()-1;i++){
            // if(v[0] == " "){
            //     cout<<1;
            //     continue;
            // }
            if(v[i]==v[i+1] && v[i]==" "){
                s1=s1+v[i];
                i=i+1;
                continue;
            }else{
                s1=s1+v[i];
            }
        }
        s1=s1+v[v.size()-1];
        return s1;
    }
};