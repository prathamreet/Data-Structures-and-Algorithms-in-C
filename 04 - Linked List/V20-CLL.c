// --------------------------------------------------------------
// circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

struct node * insertAtFirst(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head->next;

    while(p->next != head){
        p = p->next;
    } //no its point to a bofore head

    p->next = ptr;
    ptr->next = head;
    head = ptr; 
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    printf("circular linked list traversal before insertion\n");
    linkedListTraversal(head);

    head = insertAtFirst(head,80);

    printf("circular linked list traversal after insertion\n");
    linkedListTraversal(head);

    return 0;
}
