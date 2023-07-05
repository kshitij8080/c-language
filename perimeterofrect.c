// write a program to calculate perimeter of rectangle take side,a&b,from the user



#include<stdio.h>
int main()
{
	int a,b,p;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	p=2*(a+b);
	printf("p is=%d",p);
	return 0;
}
