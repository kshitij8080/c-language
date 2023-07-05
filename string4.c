#include<stdio.h>
#include<ctype.h>
int main()
{
    char s1[100];
    int i;
    printf("enter string:");
    gets(s1);
    printf("output:");
    for(i=0;s1[i]!='\0';i++)
    {
        if(isupper(s1[i]))
         printf("%c",tolower(s1[i]));
    else if(islower(s1[i]))
         printf("%c",toupper(s1[i]));
    else if(s1[i]==' ')
        printf("*");
    else if(isdigit(s1[i]))
        printf("?");
    else
      printf("%c",s1[i]);     
    }
}