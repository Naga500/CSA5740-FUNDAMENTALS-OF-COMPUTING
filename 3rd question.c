#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter till where: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	
