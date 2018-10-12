#include<stdio.h>
#include<stdlib.h>
void Han_Xin_1()
{
	int a, b;
	printf("(1)\n");
	for (a = 1; a <= 10; a++)
	{
		if (a == 1 || a == 10)
		{
			for (b = 1; b <= 10; b++)
			{
				printf("X");
			}
		}
		else
		{
			printf("X");
			for (b = 1; b <= 8; b++)
			{
				printf("-");
			}
			printf("X");
		}
		printf("\n");

	}

}