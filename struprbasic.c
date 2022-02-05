#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];

	printf("enter the string");
	gets(a);
	strupr(a);
	printf("%s",a);
}
