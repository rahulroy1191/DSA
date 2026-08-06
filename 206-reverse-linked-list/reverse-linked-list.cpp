class Solution {
public:
    void originally_reversed(ListNode*&head,  ListNode*temp){
        
        if(temp->next == NULL){
            head = temp;
            return;
        }
        originally_reversed(head,temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        originally_reversed(head, head);
        return head;
    }
};