#include<stdio.h>
#include<stdlib.h>
void Han_Xin_3(){
	printf("(3)\n");
	int temp = 4, temp2 = 5;
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

}