#include <stdio.h>

void main(){
	int freq[10], i = 0, d;
	unsigned long long n;

	printf("\nEnter The Number: ");
	scanf("%llu", &n);

	for(i=0; i < 10; i++)
        freq[i] = 0;

	while (n != 0){
		d = n % 10;
		freq[d]++;
		n /= 10;
	}

	for (i = 0; i < 10; i++){
		if (freq[i] != 0)
			printf("The Frequency Of %d is %d\n", i, freq[i]);
	}
}