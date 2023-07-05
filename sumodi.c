#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 0;
	else
	 return(n%10+sum(n/10));
}
int main()
{
	int n,s;
	printf("enter number:");
	scanf("%d",&n);
	s=sum(n);
	printf("sum of digit=%d",s);
}
