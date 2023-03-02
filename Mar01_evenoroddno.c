#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("No is even");
	}
	else
	{
		printf("No is odd");
	}
	getch();
}