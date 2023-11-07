/* c program to accept a number n and check if it is palindrome or not */
#include<stdio.h>
void main()
{
	int n,d,r=0,n1;
	printf("enter any number=");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
	d=n%10;
	r=(r*10)+d;
	n=n/10;
	}
	if(r==n1)
	printf("given number is palindrome.");
	else
	printf("given number is not palindrome.");
}
