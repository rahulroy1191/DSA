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
    bool vectorrr(ListNode* head){
        vector<int> v;
        ListNode* temp = head;
        bool flag = false;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
            
        }
        vector<int> j = v;
        reverse(v.begin(), v.end());
        if(v == j){
            flag = true;
        }
        return flag;
    }
    bool isPalindrome(ListNode* head) {
       return vectorrr(head);
    }
};