#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int i ,num[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++)
	{
		if(i%2==0)
		printf("%d\n",num[i]);
	}
}
