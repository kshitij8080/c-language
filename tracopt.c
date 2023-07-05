// ++i; first increment then used       i++; first used then increment



#include<stdio.h>
int add(int x)
{
    ++x;
    return x;
}
int main()
{
    int i=3,k,l;
    k=add(++i);
    l=add(i++);
    printf("\n i=%d,k=%d,l=%d",i,k,l);
}