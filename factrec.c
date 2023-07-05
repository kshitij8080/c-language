#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{
	int n,s;
	printf("enter number:");
	scanf("%d",&n);
	s=fact(n);
	printf("factorial of number=%d",&n);
}
   
