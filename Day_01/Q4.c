#include <stdio.h>
int main() {
    int num, digit, count = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter digit to count: ");
    scanf("%d", &digit);
    while (num > 0) {
        rem = num % 10;
        if (rem == digit) {
            count++;
        }
        num = num / 10;
    }
    printf("Digit %d appears %d times", digit, count);
    return 0;
}