// -------------------------------------------------------------------
// doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("elemnts: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("-----\n");
    do                                          //error here
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->prev;
    } while (ptr != NULL);
    

}


int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));
    struct node *n4 = (struct node *)malloc(sizeof(struct node));

    head->next = n2;
    head->prev = NULL;
    head->data = 10;

    n2->next = n3;
    n2->prev = head;
    n2->data = 20;

    n3->next = n4;
    n3->prev = n2;
    n3->data = 30;

    n4->next = NULL;
    n4->prev = n3;
    n4->data = 40;

    linkedListTraversal(head);

    return 0;
}