//-------------------------------------------------------------------------------------------------------------------
//Binary search

#include<stdio.h>

int binarySearch(int arr[],int low,int high, int key){
    if(low<=high){
        int mid = low + (high-low)/2;
        if (arr[mid]== key)  
        {
            return mid;
        }
        if (arr[mid]>key)
        {
            return binarySearch(arr,low,mid -1,key);
        }
        if (arr[mid]<key)
        {
            return binarySearch(arr,mid+1,high,key);
        }     
    }
    return -1;
}

int main() {
    int arr[] = {2,4,6,8,12,34,56,78,90,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",size);
    int key = 8;
    int indx = binarySearch(arr,0,size-1,key);
    if (indx==-1)
    {
        printf("not found");
    }
    else{
        printf("indx = %d",indx);
    }
    return 0;
}
