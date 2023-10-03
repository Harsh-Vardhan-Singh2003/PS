#include<stdio.h>
void main()
{
    int n,x,i,f,sum,num;
    printf("Enter value of x");
    scanf("%d",&x);
    printf("Enter value of n");
    scanf("%d",&n);
    sum=1;
    f=1;
    num=1;
    f=1;
    for(i=1;i<=n;i++)
    {  num=num*x;
        f=f*i;
        sum=sum+num/f;
    }
    printf("sum of series is %d",sum);
}