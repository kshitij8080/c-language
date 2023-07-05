//i-- means first used value of i=5 then decrement so i=4     ++j means first increment j=8 then used



#include<stdio.h>
int main()
{
    int i=5, j=7, k;
    k=i--+ + ++j;
    printf("%d",k);
}