/* c program to accept a number n and display all its factors */
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter any number=");
	scanf("%d",&n);
	printf("factors=");
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	printf("%d\t",i);
	}
}
