//-------------------------------------------------------------
//stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr[];
};

struct node{
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * top){
    while (top != NULL)
    {
        printf("element: %d\n",top->data);
        top = top->next;
    }
    
}

int isEmpty(struct node * top){
    if (top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int isFull(struct node * top){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

struct node * push(struct node * top, int x){
    if (isFull(top))
    {
        printf("overflow");
    }
    else{
        struct node * n  = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node ** top){
    if (isEmpty(*top))
    {
        printf("underflow");
    }
    else{
        struct node * n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
    
}

int peek(struct node *top, int pos) {
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        return ptr->data;
    } else {
        return -1;
    }
}

int main() {

    struct node * top = NULL;

    top = push(top,10);
    top = push(top,11);
    top = push(top,12);
    top = push(top,13 );
    printf("\nbefore:-----------------\n");
    linkedListTraversal(top);
    int el_p = pop(&top);
    printf("\nafter:----------------\n");
    linkedListTraversal(top);
    printf("poped elem is%d",el_p);



    return 0;
}