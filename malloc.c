#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;  // Declare and initialize ptr to NULL
    ptr = malloc(sizeof(int));  // Allocate memory for an integer

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit the program if malloc fails
    }

    *ptr = 10;  // Assign value to the allocated memory

    int *x = ptr;  // Assign the address stored in ptr to x

    printf("Address of ptr: %p\n", (void*)&ptr);// 000000000061FE18
    printf("Value of ptr (address of allocated memory): %p\n", (void*)ptr);// 0000000000991420
    printf("Address of x: %p\n", (void*)&x);//000000000061FE10
    printf("Value of x (address of allocated memory): %p\n", (void*)x);// 0000000000991420
    printf("Value pointed to by ptr: %d\n", *ptr);//10

    free(ptr);  // Free the allocated memory
    ptr = NULL; // Set ptr to NULL after freeing the memory

    return 0;
}

