#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0,n,count=0;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n>c)
    {
        c=a+b;
        count++;
        a=b;
        b=c;

    }
      printf("\n%d nth term of fabonacii series",count);
    return 0;
}
