#include<stdio.h>
 
 char* add(char* str);
 
 int main()
 {
 	char string[7];
 	char* cp;
 	int a=5;
 	cp = "hello1";
 	printf("%s",cp);
 	while(a)
 	{
 	cp = add(cp);
 	printf("%s",cp);
 	a--;
	}
	return 0;
 }
 
 char* add(char* str)
 {
 	char strinside[7];
 	int i;
 	for(i=0;i<7;i++)
 	{
 		strinside[i] = *str;
	 }
	 strinside[5] +=1;
	 str = strinside;
	 return str;
 }
