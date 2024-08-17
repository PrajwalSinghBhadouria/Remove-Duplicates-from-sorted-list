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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL ||  head->next == NULL ){
            return head;
        }
        ListNode *head1 = NULL;
        ListNode *temp = head;
        ListNode *tail = head1;
        while(temp!= NULL){
            ListNode *node = new ListNode(temp->val);
            if(head1 == NULL){
                head1 = node;
                tail = head1;
            }
            else{
                if(tail-> val != node->val){
                    tail ->next = node;
                    tail = node;
                }    
            }
            temp = temp->next;
        }
        return head1;
    }

};
