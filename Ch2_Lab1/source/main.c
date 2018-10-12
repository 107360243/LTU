#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k;
	printf("  |");
	for (k = 1; k <= 9; k++) {
		printf("%3d", k);
	}
	printf("\n");
	printf("------------------------------\n");
	for (i = 1; i <= 9; i++) 
	{
		printf("%d |", i);
		for (j = 1; j <= 9; j++) {
			k = i * j;
			printf("%3d", k);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;

}