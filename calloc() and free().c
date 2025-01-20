/*calloc()
Allocates multiple blocks of memory of a specified size
Initializes the allocated memory to zero

free() Deallocates memory associated with a pointer and Prevents memory leaks.*/

// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i, *ptr, sum = 0;
  printf("Enter number of elements: ");
  scanf("%d", &n);
//ptr=(cast-type*)malloc(byte-size);
  ptr = (int*) calloc(n, sizeof(int));
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }
  else{

    printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);
  free(ptr);
  }

  return 0;
}


/*output
Enter number of elements: 5
Enter elements: 23
2
3
4
4
Sum = 36*/
