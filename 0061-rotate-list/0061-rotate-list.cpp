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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0 || !head->next)
            return head;
        
        ListNode *temp=head;
        int l=1;
        while(temp->next){
            temp=temp->next;
            l++;
        }
        
        temp->next=head;
        k%=l;
        int end=l-k;
        while(end--)
            temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};