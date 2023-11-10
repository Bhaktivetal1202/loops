/* c program to accept a number n and calculate sum of all numbers divisible by 3 upto n */
#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("enter any number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%3==0)
	s=s+i;
	}
	printf("sum of all numbers divisible by 3 upto %d=%d",n,s);
}
