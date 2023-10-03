#include<stdio.h>
void main()
{
    int n,i,sum;
    sum=0;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of series is %d",sum);
}