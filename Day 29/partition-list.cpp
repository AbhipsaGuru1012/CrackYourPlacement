// link: https://leetcode.com/problems/partition-list/

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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> v1;
        for(int i=0;i<v.size();i++){
            if(v[i]<x){
                v1.push_back(v[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>=x){
                v1.push_back(v[i]);
            }
        }
        int j=0;
        ListNode* temp1=head;
        while(temp1!=NULL){
            temp1->val=v1[j];
            j++;    
            temp1=temp1->next;
        }
        return head;
    }
};

//another sol:
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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;
        vector<int> v1;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp!=NULL){
            if(temp->val<x){
                v.push_back(temp->val);
            }else{
                v1.push_back(temp->val);
            }
            temp=temp->next;
        }
        int i=0;
        while(temp1!=NULL && i<v.size()){
            temp1->val=v[i];
            temp1=temp1->next;
            i++;
        }
        int j=0;
        while(temp1!=NULL){
            temp1->val=v1[j];
            j++;
            temp1=temp1->next;
        }
        return head;
    }
};