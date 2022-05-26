// link: https://leetcode.com/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        while(temp!=NULL){
            if(head->val==val){
                head=head->next;
                temp=temp->next;
            }else if(temp->next!=NULL){
                if(temp->next->val==val){
                temp->next=temp->next->next;
                    // temp=temp->next;
                    continue;
                }else{
                    temp=temp->next;
                }
            }else{
                temp=temp->next;
            }
        }
        return head;
    }
};