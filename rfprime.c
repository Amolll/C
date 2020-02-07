#include <stdio.h>
void main()
{
    int no,i;

    void prime(int,int);

    printf("Enter The Number To check The number prime or Not ");
    scanf("%d", &no);

    prime(no,i);
}
void prime(int x,int k)
{

       if(x%k==0)
       {
           prime(x,k-1);
       }
        if (k == 1)
        {
            printf("the Number is prime\n");
        }
        else
        {
            printf("the No is not prime\n");
        }
}