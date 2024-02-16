#include <stdio.h>

int n, r;
long long int nCr, nPr;

long long int factorial(long int num){
	if (num < 0)
		printf("Factorial Not Possible");
	if (num == 0)
		return 1;
	else
		return (num * factorial(num - 1));
}

void main(){
	printf("Enter The Values Of n & r: ");
	scanf("%d %d", &n, &r);

	nPr = factorial(n)/factorial(n-r);
	nCr = factorial(n)/(factorial(r) * factorial(n-r));

	printf("\nnPr =  %lld", nPr);
	printf("\nnCr =  %lld", nCr);
}