// link: https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int p=1;
        priority_queue<int, vector<int>, greater<int> > minh;
        priority_queue<int> maxh;
        for(int i=0;i<n;i++){      
            maxh.push(arr[i]);                 
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                continue;
            }else{
                minh.push(arr[i]);
                if(arr[i]==1){
                    
                    p=maxh.top()+1;
                }  
            }
        }
        if(p==1){
            return 1;
        }
        while(minh.size()>0){
            int x=minh.top();
            minh.pop();
            
            if(minh.size()>0){
                int y=minh.top();
                if(y!=x && y!=x+1){
                    
                    return x+1;
                }
            }
            
        }
        return p;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends