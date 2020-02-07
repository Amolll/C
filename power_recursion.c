#include <stdio.h>
void main()
{
	int b, i, pow = 1;
	void arm(int, int, int);
	
	printf("enter the no:");
	scanf("%d %d", &b, &i);
	
	arm(b, i, pow);
}
void arm(int b, int i, int pow)
{
	if (i > 0)
	{
		pow = pow * b;
		i--;
		arm(b, i, pow);
	}
	else
	{
		printf("%d", pow);
	}
}
