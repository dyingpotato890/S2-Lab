#include <stdio.h>

struct stud{
	char name[20];
	int age;
	int rollNo;
	int mark[5];
	int total;
}s[100], temp;

void main(){	
	int n, i;
	
	printf("Enter The Number Of Student: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		int tempTotal = 0;
		
		printf("\nEnter The Name Of The Student: ");
		scanf("%s", &s[i].name);
		printf("Enter The Age Of The Student: ");
		scanf("%d", &s[i].age);
		printf("Enter The Roll Number Of The Student: ");
		scanf("%d", &s[i].rollNo);
		
		for (int j = 0; j < 5; j++){
			printf("Enter The Mark Of Subject %d: ", (j+1));
			scanf("%d", &s[i].mark[j]);

			tempTotal += (s[i].mark[j]);
		}
		s[i].total = tempTotal;
	}
	
	for (i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if ((s[j].total) > (s[j+1].total)){
				temp = s[j+1];
				s[j+1] = s[j];
				s[j] = temp;
			}
		}
	}

	printf("\nSorted Marks:\n");
	for(i = 0; i < n; i++)
		printf("\n Name - %s : Mark - %d", s[i].name, s[i].total);
	printf("\n");
}