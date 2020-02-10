#include<stdio.h>
int main()
{
char n;
printf("Enter the alphabet\n");
scanf("%c",&n);
switch(n)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("This alphabet is a vowel\n");
	break;
	default:
	printf("invaild input\n");
} 
return 0;
}
