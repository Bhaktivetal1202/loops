/* c program to accept two integers x and y and calculate the sum of all integers between x and y (both inclusive) */
#include<stdio.h>
void  main()
{
	int s=0,x,y;
	printf("enter any two integers=");
	scanf("%d%d",&x,&y);
	while(x<=y)
	{
		s=s+x;
		x++;
	}
	printf("\n sum of all integers between x and y=%d",s);
}
