#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter string=");
    gets(s1);
    printf("enter string=");
    gets(s2);

    strcpy(s1,s2);
    printf("\n string1=%s",s1);
    printf("\n string2=%s",s2);
}