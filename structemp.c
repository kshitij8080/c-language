#include<stdio.h>
struct emp
{
    int eno;
    char ename[30];
    float sal;
}e1[100];

int main()
{
    int n,i;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter emp no:");
        scanf("%d",&e1[i].eno);
        printf("enter emp name:");
        scanf("%s",&e1[i].ename);
        printf("enter emp sal:");
        scanf("%f",&e1[i].sal);
    }
    for(i=0;i<n;i++)
    {
        if(e1[i].sal>=5000)
        {
            printf("\n emp no=%d",e1[i].eno);
            printf("\n emp name=%s",e1[i].ename);
            printf("\n emp sal=%f",e1[i].sal);
        }
    }
}