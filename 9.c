#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
     x=n;
     while(n)
     {
      sum=sum+(n%10)*(n%10)*(n%10);
       n=n/10;
     }
     if(sum==x)
     printf(" Armstrong number");
     else
     printf("Not Armstrong number");
     return 0;
}