SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* tmp = new  SinglyLinkedListNode(data);
    if(llist==NULL)
        return tmp;
    else 
        {
            tmp->next=llist;
            llist=tmp;
        }
        return llist;
}
