/* 1and0.c created by ZQF*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(void)
{
	system("color 02");
	srand(time(NULL));
	int i;
	for(i=0;i<1000000;i++)
	{
		printf("%d",rand()%2);
	}
	getchar();
	return 0;
 } 
