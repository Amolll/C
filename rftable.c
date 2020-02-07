#include<stdio.h>
void main()
{
    int n,i=1;
    void table(int,int);

    printf("Enter the Number ");
    scanf("%d",&n);

    table(n,i);
}
void table(int n,int i)
{
    if (i<=10)
    {
        int t;
        t=i*n;
        printf("%d\n",t);
        i++;
        table(n,i);
    }
    else
    {
        printf("\nEND\n");
    }
    
}