#include<stdio.h>
int main()
{
	int i;
	char s1[20];
	printf("enter string");
	gets("%s",&s1);
	
	printf("string=");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]);
	}
}
