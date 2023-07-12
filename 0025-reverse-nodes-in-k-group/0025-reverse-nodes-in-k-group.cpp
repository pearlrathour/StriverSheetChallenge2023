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
    int length(ListNode* head){
        int l=0;
        ListNode *curr=head;
        while(curr){
            l++;
            curr=curr->next;
        }
        return l;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=length(head);

        if(l<k)
            return head;

        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr, *nex, *prev=dummy;

        while(l >= k){
            curr=prev->next;
            nex=curr->next;

            for(int i=1; i<k; i++){
                curr->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=curr->next;
            }
            prev=curr;
            l-=k;
        }
        return dummy->next;
    }
};