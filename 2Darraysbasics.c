#include<stdio.h>
void main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j;
	
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
	
	{
					
	printf("%d ",a[i][j]);
}
printf("\n");
	}
}
