class Solution {
public:
    int mid(ListNode* &head){
        int val = 0;
        ListNode* temp = head;
        if(head == NULL){
            return 0;
        }
        while(temp != NULL){
            temp = temp->next;
            val++;
        }
        return val;
    }
    ListNode* middleNode(ListNode* head) {
      ListNode* temp = head;
      int cont = mid(head);
      for(int i=1; i<=cont/2; i++){
        temp = temp->next;
      }
      return temp;
        
    }
};