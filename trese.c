// very important question ================vimp





#include<stdio.h>
void jump (int i, int *j)
{
    i = i*i;
    *j = *j * *j;
}

int main()
{
    int i = -3, j = -7;
    jump (i,&j);
    printf("\n i = %d, j = &d",i,j);
}