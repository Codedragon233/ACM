/* common divior.c creat by aqua_h2o*/
#include<stdio.h>
int main(void)
{
	int x,y,r;
	
	while(1)
	{
		printf("Please enter two number:");
		scanf("%d %d",&x,&y);
		r = x % y;
		while( r != 0 )
		{
			x = y;
			y = r;
			r = x % y;
			
		}
		printf("the minimum common divsor of this two number is %d\n",y);
	}
	return 0;
 } 
