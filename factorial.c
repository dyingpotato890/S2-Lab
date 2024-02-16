#include <stdio.h>

int factorial(int n){
    if (n != 0)
        return (n * factorial(n-1));
    else
        return 1;
}

void main(){
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);

    int ans = factorial(num);
    printf("\nFactorial Of %d Is %d", num, ans);
}