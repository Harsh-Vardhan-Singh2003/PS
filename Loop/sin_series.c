#include<stdio.h>
void main()
{
    float x,sum,den;
    int n,i,num,sign;
    printf("Enter the value of x and n");
    scanf("%f%d",&x,&n);
    x=(x*22/7)/180;
    sum=x;
    num=x;
    den=1;
    sign=1;
    for(i=1;i<n;i++)
    {
        num=num*x*x;
        den=den*(2*i)*((2*i)+1);
        sign=sign*(-1);
        sum=sum+(num/den)*sign;
    }
    printf("%f",sum);

}