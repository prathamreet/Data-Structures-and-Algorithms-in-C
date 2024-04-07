// --------------------------------------------------------------------------
// linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void llTraversal(struct node *temp)
{
    while (temp != NULL)
    {
        printf("elems: %d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memmory for nodes in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 100;
    second->next = third;

    third->data = 1000;
    third->next = NULL;

    llTraversal(head);

    return 0;
}