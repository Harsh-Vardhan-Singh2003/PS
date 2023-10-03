#include<stdio.h>
#include<math.h>

void main()
{
    int i,n,count=0;
    float k;
    printf("enter the value of n");
    scanf("%d",&n);
    k=pow(n,0.5);
    for(i=1;i<=k;i++)
    {
       if(n%i==0)
       {count++;}
    }
    if(count==1)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
}