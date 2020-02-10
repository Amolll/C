#include<stdio.h>
int main()
{
	char operator;
	int fno,sno;
	
	printf("enter the operator(+,-,* ):");
	scanf("%c",&operator);
	
	printf("enter the two no:");
	scanf("%d%d",&fno,&sno);
	
	switch(operator)
	{
		case '+':
			printf("%d + %d = %d\n",fno,sno,fno+sno);
			break;
		
		case '-':
			printf("%d - %d = %d\n",fno,sno,fno-sno);
			break;
		
		case '*':
			printf("%d * %d = %d\n",fno,sno,fno*sno);
			break;
		
		default:
			printf("error\n");
	}
}
