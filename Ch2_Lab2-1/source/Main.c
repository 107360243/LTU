#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b;
	printf("(1)\n");
	for(a=1;a<=10;a++)
	{
		if(a==1||a==10)
		{
			for (b = 1; b <= 10; b++)
			{
				printf("X");
			}
		}
		else
		{
			printf("X");
			for (b = 1;b<= 8; b++)
			{
				printf("-");
			}
			printf("X");
		}
		printf("\n");
	}
	int c, d;
	printf("(2)\n");
	for(c=1;c<=10;c++)
	{
		if(c!=4&&c!=5&&c!=6&&c!=7)
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
	printf("(3)\n");
	int temp = 4,temp2=5;
	int e, f;
	for (e = 0; e < 10; e++) {
		for (f = 0; f < 10; f++) {
			if ((e < 5) && (f == temp))
			{
				printf("X");
				temp--;
			}
			else if ((e < 5) && (f == temp2))
			{
				printf("X");
			}
			else if (e == 4)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		temp2++;
		printf("\n");
	}
	int i, j;
	printf("(4)\n");
	temp = 1;
	temp2 = 8;
	for(i=0;i<10;i++)
	{
		for (j = 0; j < 10; j++) {
			if ((i > 0) && (i < 5) && (j == temp))
			{
				printf("X");
			}
			else if ((i > 0) && (i < 5) && (j == temp2)) {
				temp++;
				printf("X");
				temp2--;
			}
			else if (i == 0) {
				printf("X");
			}
			else
				printf("-");
	}
		printf("\n");
	}
	temp = 9;

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
	system("pause");

}
