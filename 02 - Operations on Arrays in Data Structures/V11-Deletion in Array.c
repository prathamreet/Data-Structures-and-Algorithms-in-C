//-------------------------------------------------------------------------------------------------------------------
//Deletion Operation in Array

#include <stdio.h>
#include <stdlib.h>

// Function to display the elements of an array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int index_deletion(int arr[], int size, int index_to_del) {

    for (int i = index_to_del; i <  size -1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    
    return 1;
}

int main() {
    // Initialize an array with some values
    int arr[100] = {1, 2, 3, 4, 5};
    // Initial size and capacity of the array
    int size = 5, capacity = 100;
    // Element to insert and the index at which to insert
    int index_to_del = 2;

    printf("Array before deletion: ");
    display(arr, size);

    index_deletion(arr, size, index_to_del);
    size--;

    printf("Array after  deletion: ");
    display(arr, size);

    return 0;

}

//-------------------------------------------------------------------------------------------------------------------

