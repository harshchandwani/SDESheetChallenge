
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*nextNode = NULL;
        ListNode*prevNode = NULL;
        while(head){
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};
