#include<stdio.h>
int main()
{
	int rs,cs,csum=0;
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j;
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(j=0;j<cs;j++)

	{
		csum=0;
		for(i=0;i<rs;i++)
		{
		csum=csum+a[i][j];
		}
		
printf("%d ",csum);
}

}
