/*malloc()
Allocates a single block of memory of a specified size
Returns a pointer to the beginning of the allocated block
Does not initialize the allocated memory

free() Deallocates memory associated with a pointer and Prevents memory leaks.*/

// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);
//ptr=(cast-type*)malloc(n,element-size);
  ptr = (int*) malloc(n * sizeof(int));

  // if memory cannot be allocated
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

  // deallocating the memory
  free(ptr);
  }

  return 0;
}

/*output:
Enter number of elements: 5
Enter elements: 45
78
23
4
9
Sum = 159*/
