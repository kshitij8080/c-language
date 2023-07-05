#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[100],s2[100];
	printf("enter string=");
	gets(s1);
	{
		s2[i]=s1[i];
	}
	 s2[i]='\0';
	 printf("copy string=%s",strcpy(s1[i],s2[i]));
}
