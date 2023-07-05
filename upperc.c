#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	  printf("enter char:");
	  scanf("%c",&ch);
	   if(isupper(ch))
	     printf("char is uppercase");
	    else
	    printf("not uppercase");
}
