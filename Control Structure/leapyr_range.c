#include <stdio.h>
#include <conio.h>

void main(){
    int year;
    int min_year,max_year;
    

    printf("Enter the lowest year: ");
    scanf("%d",&min_year);

    printf("Enter the highest year: ");
    scanf("%d",&max_year);

    printf("Leap years in given range are: ");
    for(year = min_year;year <= max_year; year++){
         if(((year%4==0)&&(year%100!=0))||(year%400==0))
             printf("%d ",year);
    }
  
    
}