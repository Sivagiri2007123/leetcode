/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
struct ListNode* result =NULL;
struct ListNode* curr =NULL; 
int rem=0; //carr
int sum=0;
result=curr=l1;
while(l1 || l2)
 {
    sum=0;
    if(l1)
    {
        sum+=l1->val;
        l1=l1->next;
    }
    if(l2)
    {
        sum+=l2->val;
        l2=l2->next;
    }
    sum+=rem;
    curr->val=sum%10;
    rem=sum/10;
    if(l1)
    {
        curr->next=l1;
        curr=l1;
    }
    else if(l2)
    {
        curr->next=l2;
        curr=l2;
    }
}
if(rem>0)
{
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val=rem;
    node->next=NULL;
    curr->next=node;
    
}
return result;
}