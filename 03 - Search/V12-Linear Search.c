//-------------------------------------------------------------------------------------------------------------------
//Linear search

#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int arr[],int key, int size){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;    
}

int main() {
    int arr[] = {5,6,7,8,23,52,536,35635,6356,546,4565,4654,6,45654,654,654,645,6546,45,645,23,343,6,99,45,87,674,63442,11,25,345,463,436};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 99;
    int indx = LinearSearch(arr,key,size);
    printf("%d is present in the index %d",key,indx);
    return 0;
}