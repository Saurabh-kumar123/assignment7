#include<stdio.h>
int main()
{
    int n,sum,s;
    for(n=1;n<=1000;n++)
    {
        sum=0;
        s=n;
     while(s)
     {
      sum=sum+(s%10)*(s%10)*(s%10);
       s=s/10;
     }
     if(sum==n)
     printf("%d ",sum);
     
    }
     return 0;
}