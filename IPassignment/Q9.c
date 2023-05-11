#include <stdio.h>

int main() {
    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } 
        else {
            odd_sum += i;
        }
    }

    printf("Sum of all even numbers up to %d = %d\n", n, even_sum);
    printf("Sum of all odd numbers up to %d = %d", n, odd_sum);

    return 0;
}
