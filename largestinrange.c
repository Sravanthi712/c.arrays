#include<stdio.h>
void main()
{
	int a,b, n,count,max=0,res,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	
		n=i;
		count=0;

	while(n>1)
	{
	if(n%2==0)
	{
		n=n/2;
	}
	else
	{
		n=3*n+1;
	}

	count++;
}


if(count>max)
{
	max=count;
	res=i;
	
}
}
printf(" %d forms longest collatz sequence with %d steps",res,max);
}
