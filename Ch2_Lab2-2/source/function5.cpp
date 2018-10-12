#include<stdio.h>
#include<stdlib.h>
void Han_Xin_5() {
	int temp = 9;
	int i, j;
	printf("(5)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == j)
			{
				printf("X");
			}
			else if (j == temp)
			{
				printf("X");
				temp--;
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}

}