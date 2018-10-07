#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d%d%d",n%10,n/10%10,n/100);
//	return 0;
//}

int main()
{
	int n,m;
	while(scanf("%d",&n) != EOF)
	{
		m = (n%10)*100 + (n/10%10)*10 + (n/100);
		printf("%03d\n",m);
	}
	return 0;
}
