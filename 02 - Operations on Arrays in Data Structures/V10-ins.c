//-------------------------------------------------------------------------------------------------------------------
//Insertion Operation in Array

#include <stdio.h>
#include <stdlib.h>

// Function to display the elements of an array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified index in the array
int index_insertion(int arr[], int size, int element_to_ins, int at_index, int capacity) {
    // Check if the array is already at full capacity
    if (size >= capacity) {
        return -1; 
    }

    // Shift elements to the right to create space for the new element
    for (int i = size - 1; i >= at_index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified index
    arr[at_index] = element_to_ins;

    return 1;
}

int main() {
    // Initialize an array with some values
    int arr[100] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    // Initial size and capacity of the array
    int size = 9, capacity = 100;
    // Element to insert and the index at which to insert
    int element_to_ins = 7, at_index = 6;

    printf("Array before insertion: ");
    display(arr, size);

    index_insertion(arr, size, element_to_ins, at_index, capacity);
    size++;

    printf("Array after  insertion: ");
    display(arr, size);

    return 0;
}























//-------------------------------------------------------------------------------------------------------------------

