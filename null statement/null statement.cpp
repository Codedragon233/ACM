
#include <stdio.h>
int main (void)
{
	char c[10];
	int i = 0;

	while (scanf("%c",&c[i]) == 1)i++;

	while (printf("%c",c[i]) < 0);
	
	return 0;
}
