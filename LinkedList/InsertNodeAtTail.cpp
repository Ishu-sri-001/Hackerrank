/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* tmp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp;
    if(head==NULL)
        return tmp;
    temp=head;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=tmp;
    tmp->next=NULL;
    return temp;
}

