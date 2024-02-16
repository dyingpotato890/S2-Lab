#include <stdio.h>

void main(){
	int deci, digit, bin[100], n = 0;

	printf("\nEnter The Decimal Number: ");
	scanf("%d", &deci);

	printf("\nBinary Equivalent: ");

	while (deci != 0){
		bin[n] = deci % 2;
		deci /= 2;
		n++;
	}

	for (int i = (n-1); i >= 0; i--)
		printf("%d", bin[i]);
}