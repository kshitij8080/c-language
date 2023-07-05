#include<stdio.h>
int main()
{
    char s1[100];
    int i,c1=0,c2=0,c3=0,c4=0,c5;
    printf("enter string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
     {
	if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
       	c1++;
	else if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
                 c2++;
	else if ((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
	c3++;
	else if (s1[i]>='0'&&s1[i]<='9')
	c4++;
	else
	c5++;
     }
       printf("\n Uppercase vowels=%d",c1);
       printf("\n Lowercase vowels=%d",c2);
       printf("\n Consonents=%d",c3);
       printf("\n Digits=%d",c4);
       printf("\n Symboles=%d",c5);
}