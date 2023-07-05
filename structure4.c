#include<stdio.h>
#include<string.h>
struct car
{
    int cno;
    char cname[20],colour[20];
    float cost;
}c1[100];
int n;
int main()
{
    int i,flag=0,ch;
    char car_name[20];
    void search(char car_name[20]);
    void disp();
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter car no name colour:");
        scanf("%d%s%s%f",&c1[i].cno,&c1[i].cname,&c1[i].colour,&c1[i].cost);
    }
    do
    {
        printf("\n Enter choice:1: sarch car by name \n 2-disp all cars:");
        scanf("%d",&ch);
        switch(ch)
        {
            case1:printf("enter car model name to search:");
            scanf("%s",&car_name);
            search(car_name);
            break;
            case2:disp();
            break;
            default:printf("\n Invalid Choice...");
        }
    } while (ch<3);
}
void search(char car_name[20])
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(strcmp(c1[i].cname,car_name)==0)
        {
            flag=1;
            printf("\n Record Found..");
            printf("\n car no=%d",c1[i].cno);
            printf("\n car colour=%s",c1[i].colour);
            printf("\n car costr=%f",c1[i].cost);
        }
    }
    if(flag==0)
    printf("car not Found...");
}
void disp()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n car no=%d",c1[i].cno);
        printf("\n car name=%s",c1[i].cname);
        printf("\n car colour",c1[i].colour);
        printf("\n car cost=%f",c1[i].cost);
    }
}