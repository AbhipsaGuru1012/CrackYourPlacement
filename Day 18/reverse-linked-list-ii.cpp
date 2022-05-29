// link: https://leetcode.com/problems/reverse-linked-list-ii/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int k=1, m=0, n=1;
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL){
            if(k>=left && k<=right){
                v.push_back(temp->val);
                // temp=temp->next;
            }
            k++;
            if(k>right){
                break;
            }
            temp=temp->next;
           
            
        }
        reverse(v.begin(), v.end());
        ListNode* temp1=head;
        while(temp1!=NULL){
            if(n>=left && n<=right){
                temp1->val=v[m];
                m++;
                // temp=temp->next;
            }
            
            if(m==v.size()){
                break;
            }
            n++;
            temp1=temp1->next;
        }
        return head;
    }
};