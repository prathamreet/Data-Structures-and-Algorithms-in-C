#include<stdio.h>
#include<stdlib.h>

struct ArrayREP
{
    int totalS;
    int usedS;
    int *ptr;
};

void arrcreator(struct ArrayREP * temp1,int ts,int us){
    (*temp1).totalS = ts;
    (*temp1).usedS = us;
    (*temp1).ptr = (int*)malloc(ts * sizeof(int));
}

void display(struct ArrayREP * temp2){
    for (int i = 0; i < (*temp2).usedS; i++)
    {
        printf("%d,",(*temp2).ptr[i]);
    }
}

void setter(struct ArrayREP * temp3){
    int n;
    for (int i = 0; i < (*temp3).usedS; i++)
    {    
    printf("enter the element %d :", i+1);
    scanf("%d",&n);
    (*temp3).ptr[i] = n;
    }
}

int main() {
    struct ArrayREP roll;
    arrcreator(&roll,12,4);
    setter(&roll);
    display(&roll);



    return 0;
}