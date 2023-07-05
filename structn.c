#include<stdio.h>
struct book
{
    int bno;
    char bname[20];
    float price;
}b1[100];

int main()
{
    int n,i;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter book no:");
        scanf("%d",&b1[i].bno);
        printf("enter book name:");
        scanf("%s",&b1[i].bname);
        printf("enter book price:");
        scanf("%f",&b1[i].price);
    }
    for(i=0;i<n;i++)
    {
        printf("\n book no=%d",b1[i].bno);
        printf("\n book name=%s",b1[i].bname);
        printf("\n book price=%.2f",b1[i].price);
    }
}