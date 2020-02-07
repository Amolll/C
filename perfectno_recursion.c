#include <stdio.h>
void main()
{
	int n, s = 0, r, i = 1;
	void per(int, int, int, int);

	printf("enter the no:");
	scanf("%d", &n);
	
	per(n, s, r, i);
}
void per(int n, int s, int r, int i)
{
	if (n - 1 > i)
	{
		r = n % i;
		if (r == 0)
		{
			s = s + i;
		}
		i++;
		per(n, s, r, i);
	}
	else if (s == n)
	{
		printf("Number is perfect");
	}
	else
	{
		printf("Number is NOT perfect");
	}
}
