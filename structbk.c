#include<stdio.h>
struct book
{
    int bno;
    char bname[20];
    float price;
}b1;

  int main()
  {
    printf("enter book no:");
    scanf("%d",&b1.bno);
    printf("enter book name:");
    scanf("%s",&b1.bname);
    printf("enter book price:");
    scanf("%f",&b1.price);

    printf("\n book no=%d",b1.bno);
    printf("\n book name=%s",b1.bname);
    printf("\n book price=%.2f",b1.price);
  }
