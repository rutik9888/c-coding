#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch,res;
	float ans;

	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);

	printf("1.Addition \n2.Substraction \n3.Multiplication \n4.Division");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:res=a+b;
		printf("Result of addition is %d",res);
		break;

	case 2:res=a-b;
		printf("Result of substraction is %d",res);
		break;

	case 3:res=a*b;
		printf("Result of multiplication is %d",res);
		break;

	case 4:ans=(float)a/b;
		printf("Result of division is %f",ans);
		break;

	default:printf("case not matching");
   }
	getch();
}