#include<stdio.h>
struct book
{
    int bno,qty;
    char bname[20];
    float rate,total;
}b1;
int main()
{
    printf("Enter book no:");
    scanf("%d",&b1.bno);
    printf("Enter book name:");
    scanf("%s",&b1.bname);
    printf("Enter book rate:");
    scanf("%f",&b1.rate);
    printf("Enter QTY:");
    scanf("%d",&b1.qty);
    b1.total=(float)b1.rate*b1.qty;

    printf("\n Book no=%d",b1.bno);
    printf("\n Book name=%s",b1.bname);
    printf("\n book Rate=%f",b1.rate);
    printf("\n Book QTY=%d",b1.qty);
    printf("\n Book Total Amount=%f",b1.total);
}