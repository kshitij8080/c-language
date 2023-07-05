#include<stdio.h>
int main()
{
	int i,c1=0;
	char s1[20];
	printf("enter string");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='A'||s1[i]=='a'||s1[i]=='E'||s1[i]=='e'||s1[i]=='I'||s1[i]=='i'||s1[i]=='O'||s1[i]=='o'||s1[i]=='U'||s1[i]=='u')
	 {
		c1++;
     }
	}
	printf("\n vovels count=%d",c1);
}
