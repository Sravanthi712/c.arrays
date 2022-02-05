#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int x;
	printf("enter the string");
	gets(str);

	x=strlen(str);
	printf(" %d",x);
}
