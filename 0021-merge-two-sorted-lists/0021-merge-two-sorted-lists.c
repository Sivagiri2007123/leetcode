struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* text=&dummy;
    dummy.next=NULL;
    while(list1 && list2)
    {
        if(list1->val <= list2->val)
        {
            text->next=list1;
            list1=list1->next;
        }
        else
        {
            text->next=list2;
            list2=list2->next;
        }
        text=text->next;
    }
    if(list1)
    {
        text->next=list1;
    }
    else
    {
        text->next=list2;
    }
    return dummy.next;
}