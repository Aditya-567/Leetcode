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

    int getlength(ListNode* head){
        ListNode* temp = head;
        int count =0;
        while ( temp != NULL){
            count ++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        int len = getlength(head);
        if (len < k){
            return head;
        }

        //recursion logic 
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextnode = curr -> next;
        int position =0;

        while (position < k){
            nextnode = curr -> next;
            curr -> next =prev;
            prev = curr;
            curr = nextnode ;
            position++ ;

        }

        //recursive call
        ListNode* recursionans =NULL;
        if(nextnode != NULL){
            recursionans = reverseKGroup( nextnode, k );
            head -> next = recursionans;
        }
        return prev ;
    }
};
