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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     int carry=0;
        ListNode* h=l1,*h1=l1,*h2=l2;
        while(h1||h2)
        {
            if(!h1->next&&!h2->next)
                break;
            if(!h1->next)
                h1->next=new ListNode(0);
            if(!h2->next)
                h2->next=new ListNode(0);
            h1=h1->next;
            h2=h2->next;
            
        }
        while(l1&&l2)
        {
            l1->val+=l2->val+carry;
            if(l1->val>9)
            {
                carry=l1->val/10;
                l1->val=l1->val%10;
            }
            else
                carry=0;
            if(l1->next==NULL)
            {
                 if(carry)
             {
            l1->next=new ListNode(carry);
           // cout<<l1->val;
             }   
                
            }
            l1=l1->next;
            l2=l2->next;
        }
       
        return h;
    }
};
