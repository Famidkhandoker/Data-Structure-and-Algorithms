/*realloc()
Resizes the memory block allocated by malloc() or calloc()
Can increase or decrease the allocated memory size
Can allocate or deallocate memory
free() Deallocates memory associated with a pointer and Prevents memory leaks.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, i , n1, n2;
  printf("Enter size: ");
  scanf("%d", &n1);
//ptr=realloc(ptr,newSize)
  ptr = (int*) malloc(n1 * sizeof(int));

  printf("Addresses of previously allocated memory:\n");
  for(i = 0; i < n1; ++i)
    printf("%pc\n",ptr + i);

  printf("\nEnter the new size: ");
  scanf("%d", &n2);

  // rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("Addresses of newly allocated memory:\n");
  for(i = 0; i < n2; i++)
    printf("%pc\n", ptr + i);

  free(ptr);

  return 0;
}

/*output:
Enter size: 5
Addresses of previously allocated memory:
0000000000791440c
0000000000791444c
0000000000791448c
000000000079144Cc
0000000000791450c

Enter the new size: 5
Addresses of newly allocated memory:
0000000000791440c
0000000000791444c
0000000000791448c
000000000079144Cc
0000000000791450c*/

