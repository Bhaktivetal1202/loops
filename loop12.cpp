/* c program to accept a number and calculate the sum of all even and odd digits of the number */
#include<stdio.h>
void  main()
{
	int n,d,s1=0,s2=0;
	printf("enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d%2==0)
		s1=s1+d;
		else
		s2=s2+d;
	}
	printf("\n sum of all even digits of the given number is %d.",s1);
	printf("\n sum of all odd digits of the given number is %d.",s2);
}

