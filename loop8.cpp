/* c program to accept a number n and check if it is armstrong or not */
#include<stdio.h>
void main()
{
	int n,d,s=0,temp;
	printf("enter any number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	d=n%10;
	s=s+(d*d*d);
	n=n/10;
	}
	if(s==temp)
	printf("given number is armstrong.");
	else
	printf("given number is not armstrong.");
}
