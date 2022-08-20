#include<stdio.h>
int main()
{
    int i,a,b;
    printf("enter a two number\n");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
        printf("HCF is %d",i);
        break;
        }
    }
       return 0;
}