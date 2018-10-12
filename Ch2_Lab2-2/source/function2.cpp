#include<stdio.h>
#include<stdlib.h>
void Han_Xin_2() {
	int c, d;
	printf("(2)\n");
	for (c = 1; c <= 10; c++)
	{
		if (c != 4 && c != 5 && c != 6 && c != 7)
		{
			for (d = 1; d <= 10; d++)
			{
				printf("X");
			}
		}
		else
		{
			printf("XXX----XXX");
		}
		printf("\n");
	}
}