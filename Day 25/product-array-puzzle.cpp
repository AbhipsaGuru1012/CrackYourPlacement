// link: https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  vector<long long int> productArray(vector<long long int> v1){
      
  }
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here 
        vector<long long int> v;
        
        for(int i=0;i<nums.size();i++){
            long long int prod=1;
            //except for i find product of left part and right part of i
            int j=i-1;
            int k=i+1;
            while(j>=0 || k<=nums.size()-1){
                if(j<0){
                    prod=prod*nums[k];
                }else if(k>=nums.size()){
                    prod=prod*nums[j];
                }else{
                    prod=prod*nums[j]*nums[k];
                }
                j--;
                k++;
            }
            v.push_back(prod);
        }
       return v; 
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends