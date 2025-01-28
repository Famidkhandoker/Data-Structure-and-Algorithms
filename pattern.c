#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int FAMA(char s[], char p[]) {
    int ls = strlen(s);
    int lp = strlen(p);
    int max = ls - lp + 1;

    for (int i = 1; i < max; i++) {
        bool flag = true;

        for (int j = 1; j < lp; j++) {
            if (p[j] != s[i + j-1]) {
                flag = false;
                break;
            }
        }

        if (flag== true) {
            return i;  // Return the first found index
        }
    }

    return -1;  // Return -1 if pattern not found
}

int main() {
    char s[100], p[100];
    printf("Enter the main string: ");
    scanf("%s",&s);
    printf("Enter the pattern: ");
      scanf("%s",&p);
    int result = FAMA(s, p);

    if (result != -1) {
        printf("Pattern found at index %d\n", result);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}


