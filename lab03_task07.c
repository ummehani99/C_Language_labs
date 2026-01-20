// Write a program of nested loop that cause following output to be displayed.
#include <stdio.h>

int main() {
    int i, j;
              // Part 1: Decreasing pattern
    for(i = 5; i >= 1; i--) { // for rows//
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Part 2: Increasing pattern (starts from 2)
    for(i = 2; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
