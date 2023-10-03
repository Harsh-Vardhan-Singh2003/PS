#include<stdio.h>
void main()
{
    int n,i,f,sum;
    sum=0;
    f=1;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
        f=f*i;
        sum=sum+f/i;
    }
    printf("sum of series is %d",sum);
}