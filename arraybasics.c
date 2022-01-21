#include<stdio.h>
void main()
{
	int size;
	printf("enter a size");
	
	scanf("%d",&size);
	int num[size],i;
	printf("enter elements in array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
}
for(i=0;i<size;i++)
	{
	
		printf("Index %d-->%d\n",i,num[i]);
	
}
}

