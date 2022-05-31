// link: https://leetcode.com/problems/power-of-two/submissions/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2 !=0){
            return false;
        }
        int x=0;
       
        while(n>=2){
            
            if(n%2 !=0){
                return false;
            }
            x=n%2;
           n=n/2;
            
        }
        if(x==0 && n==1){
            return true;
        }else{
            return false;
        }
    }
};

// Recursion Approach:

class Solution {
public:
    int divisor(int n, int y){
        if(n%2==1 && n!=1){
            return 1;
        }
        if(n==1 && y==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        int m=divisor(n/2, n%2);
        return 1*m;
    }
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        int x=divisor(n, n);
        if(n%2==1){
            return false;
        }
        if(x==0){
            return true;
        }else{
            return false;
        }
    }
};