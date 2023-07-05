#include<stdio.h>
struct Emp
{
    int eno;
    char ename[20];
    float sal;
}e1[100];

int main()
{
    int n,i;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter emp no name sal:");
        scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
    }
    printf("\n Emp Details:\n");
    printf("\n Emp no \t Ename \t sal");
    for(i=0;i<n;i++)
    {
        printf("\n %d \t %s \t %f",e1[i].eno,e1[i].ename,e1[i].sal);
    }
}