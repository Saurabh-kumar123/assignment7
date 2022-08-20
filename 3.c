#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0,n;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n>c)
    {
        c=a+b;
        if(n==c)
        printf("This term is fabonacii series");
        a=b;
        b=c;
        
    }
      if(n!=c)
      printf("not term is fabonacii series");
    return 0;
}