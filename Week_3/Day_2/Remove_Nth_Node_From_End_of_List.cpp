class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int cnt = 0;
    ListNode* temp = head;

    while(temp){
    cnt++;
    temp = temp->next;
    }

    if(cnt == n){
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    int rest = cnt - n;
    temp = head;

    while(rest > 1){
        temp = temp->next;
        rest--;
    }

    ListNode* dltNode = temp->next;
    temp->next = dltNode->next;
    delete dltNode;

    return head;  
    }
};