
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         if(head==NULL || head->next==NULL){
            return NULL;
         }
        ListNode*slow = head;
        ListNode*fast = head;
        ListNode*entry = head;
        while(fast && fast->next){
            
            fast  = fast->next;
            fast = fast->next;
            slow = slow->next;
            
            if(slow == fast){
                 break;
            }
        }
        if(slow != fast){
            return NULL;
        }
        slow = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast;
        
    }
};
