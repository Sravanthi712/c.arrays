#include<stdio.h>
int main()
{
	int rs,cs,rsum=0;
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
		rsum=0;
		for(j=0;j<cs;j++)
		{
		rsum=rsum+a[i][j];
		}
		
printf("%d ",rsum);
}

}
