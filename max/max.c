/* max.c create by zqf*/
#include <stdio.h>
int main(void)
{
	int num1,num2,num3,max;
	printf("please enter three number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2) max = num1;
	else max = num2;
	if(num3>max) max = num3;
	printf("max number is %d \n",max);
	
	return 0;
	
 } 
