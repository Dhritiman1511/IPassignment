#include <stdio.h>

int main() {
    int limit, i, j, prime;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("List of all prime numbers up to %d:\n", limit);

    for (i = 2; i <= limit; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}