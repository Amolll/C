#include<stdio.h>
void main()
{
	int n,s=0,t,i,count=0,a;
	void arm(int,int,int,int,int);
	printf("enter the no:");
	scanf("%d",&n);
	t=n;
	for(i=0;i<=t;i++)
	{
		t=t/10;
		count++;
	}
	t=n;
//	printf("%d",count);
	arm(n,count,a,s,t);
}
void arm(int n,int count,int a,int s,int t)
{
	if(count+1>=0)
	{
		a=n%10;
		s=s+(a*a*a);
		n=n/10;
	
		count--;
		arm(n,count,a,s,t);
	}
	//	printf("%d",s);
	else if(t==s)
	{
		printf("arm");
	}
	else
	{
		printf("not");
	}
}
