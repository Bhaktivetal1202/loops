/* c program to accept a number and calculate the multiplication of all even and odd digits of the number */
#include<stdio.h>
void  main()
{
	int n,d,m1=1,m2=1;
	printf("enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d%2==0)
		m1=m1*d;
		else
		m2=m2*d;
	}
	printf("\n multiplication of all even digits of the given number is %d.",m1);
	printf("\n multiplication of all odd digits of the given number is %d.",m2);
}

