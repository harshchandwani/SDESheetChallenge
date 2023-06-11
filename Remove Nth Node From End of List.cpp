
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*slow = head;
        ListNode*fast = head;
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        if(fast == nullptr){
            return head->next;
        }
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode*temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};
