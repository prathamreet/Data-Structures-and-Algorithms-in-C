// -----------------------------------------------------------
// insertion in linked list

/*
case 1 - insert at beginning O(1)
case 2 - insert at between O(n)
case 3 - insert at the end O(n)
case 4 - insert after a given node O(1)
*/

#include <stdio.h>
#include <stdlib.h>

// creating structure node
struct node
{
    int data;
    struct node *next;
};

// calling fucntion
void linkedListTraversal(struct node *ptr);
struct node *insertAtFirst(struct node *head, int data);
struct node *insertAtIndex(struct node *head, int data, int index);
struct node *insertAtEnd(struct node *head, int data);
struct node *insertAfterNode(struct node *head, struct node *prevNode, int data);

int main()
{

    /* //one way
        struct node *head;
        struct node *second;
        struct node *third;
        struct node *fourth;

        //allocate memory for nodes in the linked list in heap
        head = (struct node *)malloc(sizeof(struct node));
        second = (struct node *)malloc(sizeof(struct node));
        third = (struct node *)malloc(sizeof(struct node));
        fourth = (struct node *)malloc(sizeof(struct node));
    */

    // declare and allocate memory for nodes in the linked list in heap
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    // creating linked list chain
    //  link first and second nodes
    head->data = 10;
    head->next = second;
    // link second and third nodes
    second->data = 20;
    second->next = third;
    // link third and fourth nodes
    third->data = 30;
    third->next = fourth;
    // terminating the list with null in 4th
    fourth->data = 40;
    fourth->next = NULL;

    printf("\nlist before insertion----------\n");
    linkedListTraversal(head);
    //--------------------------------------------------

    // head = insertAtFirst(head, 99);
    // head = insertAtIndex(head, 99, 2);
    // head = insertAtEnd(head, 99);
    // head = insertAfterNode(head, third,99);

    //--------------------------------------------------
    printf("\nlist after insertion----------\n");
    linkedListTraversal(head);

    return 0;
}

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("elemnets: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node * insertAfterNode(struct node* head,struct node * prevNode,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
