#include<stdio.h>
int main()
{
    int i,count=0,j;
    for(i=1;i<=100;i++)
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