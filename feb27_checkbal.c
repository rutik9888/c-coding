#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	printf("Enter an amt");
	scanf("%d",&amt);
	
	if(amt>1000)
	{
		printf("sufficient bal available");
	}
	if(amt<=1000)
	{
		printf("insufficient bal");
	}
	getch();
}