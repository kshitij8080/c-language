#include<stdio.h>
struct item
{
    int code;
    char name[20];
    float price;
}i1[100];
int main()
{
    int i,n;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter item code name price:");
        scanf("%d%s%f",&i1[i].code,&i1[i].name,&i1[i].price);
    }
    for(i=0;i<n;i++)
    {
        printf("\n item code=%d",i1[i].code);
        printf("\n item name=%s",i1[i].name);
        printf("\n item price=%f",i1[i].price);
    }
}
