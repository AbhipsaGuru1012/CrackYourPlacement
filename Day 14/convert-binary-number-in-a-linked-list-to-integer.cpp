// link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum=sum+(v[i]*pow(2, v.size()-i-1));
        }
        return sum;
    }
};