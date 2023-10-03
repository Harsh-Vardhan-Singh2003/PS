#include<stdio.h>
void main()
{
    int bs,hra,da,allow,pf,ts;
    char A,B,C,grade;
    printf("Enter the basic salary");
    scanf("%d",&bs);
    printf("Enter the grade");
    scanf(" %c",&grade);
    hra= 0.20*bs;
    da= 0.50*bs;
    pf=0.11*bs;
    if(grade==A)
    { allow=1700;
    }
    else if(grade==B)
    { allow=1500;
    }
    else if(grade==C)
    { allow=1300;
    }
    else
    { allow=1300;
    }
    ts=bs+hra+da+allow-pf;
    printf("%d",&ts);
}