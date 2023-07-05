#include<stdio.h>
int main()
{
	int i;
	char s1[40];
	printf("enter string in uppercase:");
	scanf("%s",s1);
	
	printf("\n string=");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]+32);
	}
}
