#include<stdio.h>
int main()
{
  int i=1,n;
  printf("Enter no.:");
  scanf("%d",&n);
  printf("\n reverse No.=");
  while(n>0);
  {
    printf("%d",n%10);
    n=n/10;
  }
}