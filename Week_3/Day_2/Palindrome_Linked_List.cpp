class Solution {
    public:
    ListNode* revers(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = revers(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newhead;
    }
public:
    bool isPalindrome(ListNode* head) {
      ListNode* slow = head;
      ListNode* fast = head;
      while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
      }
      ListNode* newhead = revers(slow->next);
      ListNode* first = head;
      ListNode* second = newhead;
      while(second){
        if(first->val != second->val){
            revers(newhead);
            return false;
        }
        first = first->next;
        second = second->next;
      }
      revers(newhead);
      return true;
    }
};