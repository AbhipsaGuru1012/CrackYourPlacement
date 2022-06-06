// link: https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int y=nums1[i];
            
            vector<int>::iterator it;
            it = std::find (nums2.begin(), nums2.end(), y);
            if (it != nums2.end())
            {
                int x=0;
                for(int j=(it-nums2.begin());j<nums2.size();j++){
                    if(nums2[j]>y){
                        v.push_back(nums2[j]);
                        x=1;
                        break;
                    }else{
                        x=0;
                    }
                }
                if(x==0){
                    v.push_back(-1);
                }
                // std::cout << "Element " << ser <<" found at position : " ;
                // std::cout << it - vec.begin() << " (counting from zero) \n" ;
            }
        }
        return v;
    }
};