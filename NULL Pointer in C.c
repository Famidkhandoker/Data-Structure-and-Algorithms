#include <stdio.h>

int main()
{
    // declaring null pointer
    int* ptr = NULL;

    // derefencing only if the pointer have any value
    if (ptr == NULL) {
        printf("Pointer does not point to anything");
    }
    else {
        printf("Value pointed by pointer: %d", *ptr);
    }
    return 0;
}
