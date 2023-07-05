#include<stdio.h>
int main()
{
	int i;
	char s1[20];
	printf("enter string=");
	scanf("%s",&s1);
	for(i=0;s1[i]!='\0';i++)
	printf("reverse string=\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
	return 0;
}
