#include <stdio.h>
void main()
{
	int n, f = 1;
	void fact(int, int);
	printf("enter the no:");
	scanf("%d", &n);
	fact(n, f);
}
void fact(int n, int f)
{
	if (n > 0)
	{
		f = f * n;
		n--;
		fact(n, f);
	}
	else
	{
		printf("\n%d", f);
	}
}
