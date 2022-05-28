// link: https://leetcode.com/problems/middle-of-the-linked-list/submissions/

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
    ListNode* middleNode(ListNode* head) {
        int m=0;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp!=NULL){
            m++;
            temp=temp->next;
        }
        int mid=(m/2)+1;
        int n=0;
        while(temp1!=NULL){
            n++;
            if(n==mid){
                return temp1;
            }
            temp1=temp1->next;
        }
        return temp1;
    }
};