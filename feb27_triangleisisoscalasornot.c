#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c
	printf("Enter 3 angles");
	scanf("%d%d%d",&a,&b,&c);

	if(a==b || b==c || a==c)
		printf("Isoscales triangle formed");
	else
		printf("Isoscales triangle not formed");
	getch();
}