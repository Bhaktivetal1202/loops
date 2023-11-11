/* c program to accept a number and display the multiplication of all digits of the number */
#include<stdio.h>
void  main()
{
	int n,d,m=1;
	printf("enter any number=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		m=m*d;
		n=n/10;
	}
	printf("\n multiplication of all digits of the given number is %d.",m);
}

