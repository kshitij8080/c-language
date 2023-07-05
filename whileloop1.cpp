#include<stdio.h>
int main()
{
  int n,s=0,h,d;
  printf("Enter no.:");
  scanf("%d",&n);
  h=n;
  while(n>0)
  {
  	d=n%10;
    s=s+(d*d*d);
    n=n/10;
  }
}
