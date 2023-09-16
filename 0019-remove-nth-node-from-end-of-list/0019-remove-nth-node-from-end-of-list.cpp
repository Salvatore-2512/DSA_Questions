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
ListNode* rev(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    int findLength(ListNode* &head ) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}


    void deleteNode(int position, ListNode* &head) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                ListNode* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }
        int len  = findLength(head);


        

        //deleting middle node

        //step  : find prev and curr
        int i =1;
        ListNode* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        ListNode* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;

}

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp = rev(head);
        deleteNode(n, temp);
        ListNode* newHead = rev(temp);
        return newHead;
        
    }
    
};