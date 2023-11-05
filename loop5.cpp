/* c program to accept a number n and calculate the sum of all its factors */
#include<stdio.h>
void main()
{
	int i,n,s=0;
	printf("enter any number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	s=s+i;
	}
	printf("sum of all factors of a given number=%d",s);
}
