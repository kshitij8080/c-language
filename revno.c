#include<stdio.h>
int main()
{
	int n,s=0;
	printf("enter number:");
	scanf:("%d",&n);
	while(n>0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	printf("reverse no=%d",s);
}
