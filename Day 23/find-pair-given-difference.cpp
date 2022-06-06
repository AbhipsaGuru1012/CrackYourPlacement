// link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends

int binarySearch(int arr[], int s, int e, int key, int i){
    if (e >= s) {
        int mid=s+(e-s)/2;
        if(arr[mid]==key && mid!=i){
            return 1;
        }else if(arr[mid]>key){
            
            return binarySearch(arr, s, mid-1, key, i);
        }else if(arr[mid]<key){
            
            return binarySearch(arr, mid+1, e, key, i);
        }
    }
    return 0;
    
}

bool findPair(int arr[], int size, int n){
    //code
    
    sort(arr, arr+size);
    
    for(int i=0;i<size;i++){
        if(arr[i]>n){
            int k=arr[i]-n;
            
            if(binarySearch(arr, 0, size - 1, k, i)){
                return true;
            }
        }else{
            int k=n+arr[i];
            
            if(binarySearch(arr, 0, size - 1, k, i)){
                return true;
            }
        }
    }
    return false;
    
}