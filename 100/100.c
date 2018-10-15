/* 100.c created by ZQF*/
#include<stdio.h>

int main(void)
{
	int num,index;
	num = 0;
	index = 1;
	while(index<=100)
	{
		num = num + index;
		index++;
	}
	printf("%d",num);
	
	return 0;
}
