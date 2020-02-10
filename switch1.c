#include<stdio.h>
int main()
{
int n;
printf("enter value of n\n");
scanf("%d",&n);
switch(n)
{
	case 1:
	printf("day is monday\n");
	break;
	case 2:
	printf("day is tuesday\n");
	break;
	case 3:
	printf("day is wednesday\n");
	break;	
	case 4:
	printf("day is thursday\n");
	break;
	case 5:
	printf("day is friday\n");
	break;
	case 6:
	printf("day is saturday\n");
	break;
	case 7:
	printf("day is sunday\n");
	break;
	default:
	printf("invailed input\n");
}
return 0;
}
