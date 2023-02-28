#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter 2 numbers to be compared");
	scanf("%d%d",&a,&b);

	if(a>b)
		printf("a is greater");

	else
		printf("b is greater");
	getch();
}