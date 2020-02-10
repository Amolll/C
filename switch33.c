#include <stdio.h>
int main()
{
	int marks;

	printf("enter the marks 0 to 100:");
	scanf("%d", &marks);

	switch (marks / 10)
	{
	case 10:
	case 9:
		printf("Your grade:A");
		break;

	case 8:

	case 7:
		printf("Your grade:b");
		break;

	default:
		printf("fail");
	}
}
