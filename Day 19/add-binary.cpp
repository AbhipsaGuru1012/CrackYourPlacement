// link: https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int l=a.length();
        while(l<b.length()){
            a.push_back('0');
            l++;
        }
        while(b.length()<a.length()){
            b.push_back('0');
        }
        // int x=stoi(a);
        // int y=stoi(b);
        int i=0,j=0;
        int sum=0,carry=0;
        string str="";
        
        while(i<a.length()){
//             if(i>=a.length()){
//                 int k=int(b[j]-'0');
//                 if(carry==1 && k==1){
//                     str=str+"0";
//                     carry=1;
//                 }else{
//                     k=k+carry;
//                     str=str+to_string(k);
//                     carry=0;
//                 }
//                 j++;
//             }
//             if(j>=b.length()){
//                 int k=int(a[i]-'0');
//                 if(carry==1 && k==1){
//                     str=str+"0";
//                     carry=1;
//                 }else{
//                     k=k+carry;
//                     str=str+to_string(k);
//                     carry=0;
//                 }
//                 i++;
            
//             }else{
                int k=int(a[i]-'0');
                int m=int(b[j]-'0');
                cout<<k<<" "<<m<<" ";
                if(k==1 && m==1 && carry==0){
                    carry=1;
                    str=str+"0";
                
                }else if(k==1 && m==1 && carry==1){
                    carry=1;
                    str=str+"1";
                    cout<<"true";
                }else if((k==1 || m==1) && carry==1){
                    carry=1;
                    str=str+"0";
                }else if((k==1 || m==1) && carry==0){
                    carry=0;
                    str=str+"1";
                    cout<<"true";
                }else{
                    int n=k+m+carry;
                    // cout<<"true;"
                    str=str+to_string(n);
                    carry=0;
                }
                // i++;
                // j++;
            
            i++;
            j++;
        }
        if(carry==1){
            str=str+"1";
        }
        reverse(str.begin(), str.end());
        return str;
    }
};