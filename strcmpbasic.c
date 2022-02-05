#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[20];
	int x;

	printf("enter first string");

	gets(a);
	printf("enter string two");
	gets(b);
	x=strcmp(a,b);
	if(x==0)
	{
			printf("same");
	}

	else
	{
			("not same");
	}

}
