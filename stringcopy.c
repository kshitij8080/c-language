#include<stdio.h>
int main()
{
	int i;
	char s1[20],s2[20];
	printf("enter string s1");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	  s2[i]='\0';
	  printf("copy string s2=%s",s2);
} 
