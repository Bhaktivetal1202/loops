/* c program to accept a number n and display square and cube of all numbers upto n */
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter any number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\n square of %d=%d and cube of %d=%d",i,i*i,i,i*i*i);
	}
}
