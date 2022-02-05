#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[20];

	printf("enter the string");
	gets(a);
	strcpy(b,a);

	printf(" %s",b);
}
