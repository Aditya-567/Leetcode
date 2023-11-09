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

    ListNode* middlenode(ListNode* head){
        ListNode* slow =head;
        ListNode* fast =head;

        while(fast -> next != NULL){
            fast = fast -> next;
            if(fast -> next !=NULL ){
                fast = fast-> next;
                slow = slow -> next;
            }
        }
        return slow;
    }

    ListNode* reverse(ListNode* prev , ListNode* curr){
        if(curr == NULL){
            return prev;
        }
        ListNode* nextnode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextnode;

        return reverse(prev,curr);
    }

    bool compare(ListNode* head,ListNode*head2){
        while(head2!=NULL){
            if(head -> val != head2 -> val){
                return false;
            }
            else{
                head =head->next;
                head2 =head2 -> next;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        //break ll into 2 half
        ListNode* midnode= middlenode(head);
        ListNode* head2 = midnode -> next;
        midnode ->next = NULL;

        //reverse second half of ll
        ListNode* prev =NULL;
        ListNode* curr = head2;
        head2=reverse(prev,curr);

        //compare firt and with reversed second half
        return compare(head,head2);

    }
};
