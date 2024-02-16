/* c program to accept an integer n and display all even and odd numbers upto n */
#include<stdio.h>
void  main()
{
	int i,n;
	printf("enter the limit=");
	scanf("%d",&n);
	printf("\neven numbers=");
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
	printf("\nodd numbers=");
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\t",i);
	}
}


