/*swap.c created by ZQF*/
#include<stdio.h>

int main(void)
{
	int num1,num2,temp;
	printf("please enter two number:");
	scanf("%d %d",&num1,&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("swap this two number is: %d %d",num1, num2);
	
	return 0;
}

