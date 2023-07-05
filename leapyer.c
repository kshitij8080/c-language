// leap year or not using poiner

#include<stdio.h>
int main()
{
     int y,*p;
     printf("enter year to check:");
     scanf("%d",y);
     p=&y;
       if(*p%4==0)
        printf("given year is leap");
    else
        printf("given year is not leap");
}