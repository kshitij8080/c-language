#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    printf("enter string=");
    gets(s1);

    printf("\n uppercase string=%s",strupr(s1));
    printf("\n lowercase string=%s",strlwr(s1));
}