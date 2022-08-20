#include<stdio.h>
int main()
{
    int i,count=0,j,a,b;
    printf("enter a two number\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
    if(i%j==0)
    count++;
    if(count==2)
    printf("%d ",i);
    count=0;
    }
    return 0;
}