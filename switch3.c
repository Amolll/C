#include<stdio.h>
int main()
{
	int a,b,ch;
	int choice;

printf("Enter The Two Number\n");
scanf("%d %d",&a,&b);

printf("1.Addition\n");
printf("2.Multiplication\n");

printf("Enter Your Choice\n");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	printf("Addition is = %d\n",a+b);
	break;
	case 2:
	printf("multiplication is = %d\n",a*b);
	break;
	default:
	printf("Wrong Choice");
}	
}
