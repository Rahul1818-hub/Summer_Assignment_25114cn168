//Write  a program to print hallow square pattern
/*
*****

*   *

*   *

*   *

*****
*/
#include <stdio.h>
int main() {
    int i, j, size;
    printf("Enter the side length of the square: ");
    scanf("%d", &size);
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++)
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}