#include<stdio.h>
int main()
{
	int n,*p,d,r=0;
	printf("enter number:");
	scanf("%d",&n);
	p=&n;
	while(*p>0)
	{
		d=*p%10;
		r=r*10+d;
		*p=*p/10;
	}
	printf("reverse no=%d",r);
}
