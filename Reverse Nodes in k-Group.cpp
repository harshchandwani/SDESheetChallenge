
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*currCheck = head;
        for(int i = 0; i < k ; i++){
            if(currCheck == nullptr){
                return head;
            }
            currCheck = currCheck->next;
        }
        ListNode*curr = head;
        ListNode*prev = NULL;
        ListNode*next = NULL;
        for(int i = 0 ;i < k; i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
