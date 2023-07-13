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
    ListNode *reverse(ListNode *node){
        ListNode *curr=node, *prev=NULL, *nex;
        while(curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head, *dummy=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *node=reverse(slow->next);
        slow->next=node;

        while(node){
            if(dummy->val != node->val)
                return 0;
            dummy=dummy->next;
            node=node->next;
        }
        return 1;
    }
};