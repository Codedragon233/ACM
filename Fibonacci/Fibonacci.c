/*Fibonacci.c created by ZQF */
#include<stdio.h>
int main (void)
{
	int a[30], index;
	a[0] = 0;
	a[1] = 1;
	
	for(index=2;index<=29;index++)
	{
		a[index] = a[index-1] + a[index-2];
	}
	
	printf("a20=%d\n",a[19]);
	for(index=0;index<=29;index++)
	{
		printf("%d ",a[index]);
	}
	
	return 0;
}
