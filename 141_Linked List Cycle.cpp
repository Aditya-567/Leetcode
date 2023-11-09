/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //create map table 
        map <ListNode*,bool> table;

        //store head address in temp 
        ListNode* temp = head;

        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
