
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy = new ListNode(0);
        ListNode*ans = dummy;
        int carry = 0;
        while(l1 || l2 || carry){
            int sum = 0;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode*temp = new ListNode(sum % 10);
            ans->next = temp;
            ans = ans->next;
        }
        return dummy->next;
    }
};
