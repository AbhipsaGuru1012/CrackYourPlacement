// link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp1=head;
        vector<int> v1;
        
        for(int i=0;i<v.size();i++){
            int sum=0;
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    sum++;
                    v.erase(v.begin()+j);
                    j--;
                }
                
            }
            if(sum>0){
                v.erase(v.begin()+i);
                i--;
            }
            // v.erase(unique(v.begin(), v.end()), v.end());
        }
        int j=0;
        if(v.size()==0){
            return NULL;
        }
        while(j<(v.size())){
            cout<<v[j]<<" ";
            temp1->val=v[j];
            j++;
            if(j==(v.size())){
                temp1->next=NULL;
                break;
            }
            temp1=temp1->next;
            
        }
        // temp1=NULL;
        return head;
    }
};