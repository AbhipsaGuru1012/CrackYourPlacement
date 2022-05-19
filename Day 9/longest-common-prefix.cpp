// link: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        string str1="";
        
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<strs.size()-1;i++){
            cout<<strs[i]<<endl;
            str1="";
            if(strs[i].length()==0 || strs[i+1].length()==0){
                return "";
            }
            if(strs[i].length()>strs[i+1].length()){
                for(int j=0;j<strs[i+1].length();j++){
                    // str+=strs[i+1].at(j);
                    if(strs[i].at(j) == strs[i+1].at(j)){
                        str1=str1+strs[i+1].at(j);
                        if(j==(strs[i+1].length()-1)){
                            strs[i+1]=str1;
                        }
                    }else{
                        if(str1==""){
                            return "";
                        }else{
                            // str.pop_back();
                            strs[i+1]=str1;
                            // str="";
                            
                        }
                        break;
                    }
                }
                if(strs[i]==""){
                    str1="";
                }
               // cout<<str1<<endl; 
            }
            
            else{
                str1="";
                // if(strs[i+1]==""){
                //     continue;
                // }
                for(int j=0;j<strs[i].length();j++){
                    
                    // cout<<str<<endl;
                    if(strs[i+1].at(j)==strs[i].at(j)){
                        // cout<<strs[i].at(j)<<endl;
                        str1=str1+strs[i].at(j);
                        if(j==(strs[i].length()-1)){
                            strs[i+1]=str1;
                        }
                        // cout<<str1<<endl;
                        // str1=str;
                    }else{
                        if(str1==""){
                            return "";
                        }else{
                            // str.pop_back();
                            cout<<" "<<str1<<endl;
                            strs[i+1]=str1;
                            // str="";
                            // break;
                        }
                        break;
                    }
                }
                // cout<<str1<<endl;
            }
            
        }
        return str1;
    }
};