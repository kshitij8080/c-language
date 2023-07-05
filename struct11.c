#include<stdio.h>
struct person
{
    char name[20];
    char addrs[20];
    struct birthdate
    {
        int dd;
        char mm[20];
        int yy;
    }b1[100];
}p1[100];
int main()
{
    int i,n;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter person name address birthdate:");
        scanf("%s%s%d%s%d",&p1[i].name,&p1[i].addrs,&p1[i].b1[i].dd,&p1[i].b1[i].mm,&p1[i].b1[i].yy);
    }
    for(i=0;i<n;i++)
    {
        printf("\n person name=%s",p1[i].name);
        printf("\n person addres=%s",p1[i].addrs);
        printf("\n birthdate=%d/%s/%d",p1[i].b1[i].dd,p1[i].b1[i].mm,p1[i].b1[i].yy);
    }
}