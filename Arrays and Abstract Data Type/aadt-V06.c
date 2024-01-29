
//Implementing Array as an Abstract Data Type

#include<stdio.h>
#include<stdlib.h>

// Structure to represent a dynamic array
struct myArray {
    int total_size; // Total size of the array
    int used_size;  // Number of elements used in the array
    int *ptr;       // Pointer to the dynamically allocated array
};

// Function to create an array with specified total size and used size
void createArray(struct myArray *a, int tsize, int usize){
    (*a).total_size = tsize;
    (*a).used_size  = usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int)); // Allocate memory for the array

    /*
    //same thing diff syntax.....
    a->total_size = tsize;
    a->used_size  = usize;
    a->ptr = (int*)malloc(tsize  * sizeof(int));
    */

}

// Function to display the elements of the array
void show(struct myArray *a){
    for (int i = 0; i < (*a).used_size; i++) {
        printf("%d,", (*a).ptr[i]);
    }
}

// Function to set values for each element of the array
void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < (*a).used_size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &n);
        (*a).ptr[i] = n;
    }
}

// Main function
int main() {
    struct myArray marks;
    createArray(&marks,10,5);
    printf("we are runnin setval now\n");
    setVal(&marks);
    printf("we re running show now\n");
    show(&marks);

    // Free the dynamically allocated memory before exiting
    free(marks.ptr);

    return 0;
}
