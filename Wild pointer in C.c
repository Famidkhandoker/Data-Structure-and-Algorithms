#include <stdio.h>

int main()
{
    int* p; /* wild pointer */

    // trying to access the value pointed by a wild pointer
    // is undefined behavior
    // printf("Value pointed by wild pointer: %d\n", *p);
    // //give error

    int x = 10;

    // Accessing the value pointed by 'p'
    printf("Value pointed by 'p' is: %d\n", *p);

    return 0;
}

//output:
//Value pointed by 'p' is: 10425185

