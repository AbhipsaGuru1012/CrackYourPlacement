// link: https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        vector<int> v;
        int i=0;
        while(num>0){
            int k=num%10;
            int m=k*pow(10, i);
            i++;
            v.push_back(m);
            num=num/10;
        }
        reverse(v.begin(), v.end());
        string str="";
        for(int i=0;i<v.size();i++){
            if(v[i]<5){
                if(v[i]==4){
                    str=str+"IV";
                }else{
                    for(int j=0;j<v[i];j++){
                        str=str+"I";
                    }
                }
            }else if(v[i]==5){
                str=str+"V";
            }else if(v[i]<10){
                if(v[i]==9){
                    str=str+"IX";
                }else{
                    int a=v[i]%5;
                    str=str+"V";
                    for(int j=0;j<a;j++){
                        str=str+"I";
                    }
                }
            }else if(v[i]==10){
                str=str+'X';
            }else if(v[i]<50){
                // int a=v[i]%10;
                if(v[i]==40){
                    str=str+"XL";
                }else{
                    int b=v[i]/10;
                    for(int l=0;l<b;l++){
                        str=str+"X";
                    }
                }
                // for(int j=0;j<b;j++){
                //     str=str+"I";
                // }
            }else if(v[i]==50){
                str=str+"L";
            }else if(v[i]<100){
                if(v[i]==90){
                    str=str+"XC";
                }else{
                    str=str+"L";
                    int a=v[i]-50;
                    // int b=a%10;
                    int c=a/10;
                    for(int l=0;l<c;l++){
                        str=str+"X";
                    }
                }
                
            }else if(v[i]==100){
                str=str+"C";
            }else if(v[i]<500){
                if(v[i]==400){
                    str=str+"CD";
                }else{
                    int a=v[i]/100;
                    for(int j=0;j<a;j++){
                        str=str+"C";
                    }
                }
            }else if(v[i]==500){
                str=str+"D";
            }else if(v[i]<1000){
                if(v[i]==900){
                    str=str+"CM";
                }else{
                    str=str+"D";
                    int a=v[i]-500;
                    int b=a/100;
                    for(int j=0;j<b;j++){
                        str=str+"C";
                    }
                }
            }else if(v[i]==1000){
                str=str+"M";
            }else if(v[i]<5000){
                
                int a=v[i]/1000;
                for(int j=0;j<a;j++){
                    str=str+"M";
                }
            }
        }
        return str;
    }
};