// ------------------------------------------------------
//stack

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack * ptr){
    if (isEmpty(ptr))
    {
        printf("underflow");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}

int peek(struct stack * ptr, int i){
    if (ptr->top-i+1<0)
    {
        printf("invalid positon");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}

void display(struct stack * ptr){
    if (isEmpty(ptr))
    {
        printf("empty");
    }
    else{
        for (int i = ptr->size-1; i >= 0; i--)
        {
            printf("%d,",ptr->arr[i]);
        }
    }
}

int stackTop(struct stack * ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack * ptr){
    return ptr->arr[0];
}

int main() {

    struct stack * S;
    S->size = 5;
    S->top = -1;
    S->arr = (int*)malloc(S->size * sizeof(int));

    printf("%d\n", isEmpty(S));
    printf("%d\n", isFull(S));

    push(S,50);
    push(S,50);
    push(S,50);
    push(S,50);
    push(S,50);

    printf("%d\n", isEmpty(S));
    printf("%d\n", isFull(S));
    printf("%d\n",peek(S,2));
    printf("%d",S->arr[S->top]);
    printf("\n----\n");
    display(S);
    return 0;
}
