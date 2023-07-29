/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)   
            return head;

        Node *curr=head,*temp;
        while(curr){
            temp= new Node(curr->val);
            temp->next=curr->next;
            curr->next=temp;
            curr=curr->next->next;
        }

        curr=head;
        while(curr){
            if(curr->random)
                curr->next->random = curr->random->next;
            curr=curr->next->next;
        }

        Node* dummy = new Node(0);
        curr = head;
        temp = dummy;
        Node *fast;

        while(curr) {
            fast = curr->next->next;;
            temp->next = curr->next;
            curr->next = fast;
            temp = temp->next;
            curr = fast;
        }
        return dummy->next;
    }
};