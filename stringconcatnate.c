#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter string=");
	gets(s1);
	printf("enter second string=");
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	  for(j=0;s2[j]!='\0';j++)
	  {
	  	s1[i++]=s2[j];
	  }
	  s1[i]='\0';
	  printf("copy string=%s",s1);
}
