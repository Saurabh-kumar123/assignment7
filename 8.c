#include<stdio.h>
int main()
{
    int i,count=0,j,b;
    printf("enter a number\n");
    scanf("%d",&b);
    for(i=++b;i<=b*b;i++)
    {
        for(j=1;j<=i;j++)
    if(i%j==0)
    count++;
    if(count==2)
   {
     printf("%d ",i);
     break;
   }
    count=0;
    }
    return 0;
}