#include<stdio.h>
int main()
{
	int i,c=0;
	char s1[30];
	printf("enter string");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++);
	printf("length of string=%d",i);
}
