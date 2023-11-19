/* c program to accept two integers x and n and compute x^n */
#include<stdio.h>
void  main()
{
	int x,n,m=1,i=1;
	printf("enter any two integers=");
	scanf("%d%d",&x,&n);
	while(i<=n)
	{
		m=m*x;
		i++;
	}
	printf("\n power=%d",m);
}
