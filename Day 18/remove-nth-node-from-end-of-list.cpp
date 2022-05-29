// link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        ListNode* temp=head;
        while(temp!=NULL){
            i++;
            temp=temp->next;
        }
        int m=i-n+1;
        
        ListNode* temp1=head;
        int k=1;
        if(m==1){
            head=temp1->next;
            return head;
        }
        while(temp1!=NULL){
            if(k+1==m){
                temp1->next=temp1->next->next;
                return head;
            }
            k++;
            temp1=temp1->next;
        }
        return head;
    }
};