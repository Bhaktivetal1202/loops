/* c program to accept a number n and check if it is perfect or not */
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
	if(s==n)
	printf("given number is perfect.");
	else
	printf("given number is not perfect.");
}
