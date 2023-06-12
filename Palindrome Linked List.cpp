
class Solution {
public:
    ListNode* temp;
    bool helper(ListNode*head){
        if(!head){
            return true;
        }
        bool res = helper(head->next) && (temp->val == head->val);
        temp = temp->next;
        return res;
    }
    bool isPalindrome(ListNode* head) {
        temp = head;
        return helper(head);
    }
};
