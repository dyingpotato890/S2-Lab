#include <stdio.h>

int i, k, result;

int power(int i, int k) {
    if (k != 0)
        return (i * power(i, k - 1));
    else
        return 1;
}

void main() {
    printf("Enter The Base Number: ");
    scanf("%d", &i);
    printf("Enter The Power: ");
    scanf("%d", &k);

    printf("%d^%d = %d", i, k, power(i, k));
}