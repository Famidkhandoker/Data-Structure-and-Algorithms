#include <stdio.h>

void TOH(int n, int A, int B, int C ) {
    if (n > 0) {
        TOH(n - 1, A, C, B);
        printf("Move disk %d from %c to %c\n", n, A, C);
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int n = 3; // Number of disks
    TOH(n, 'A', 'B', 'C'); // A = From, B = using, C = to
    return 0;
}

