#include<stdio.h>
struct student
{
    int rno;
    char sname[20];
    float per;
}s1[100];

int main()
{
    int n,i;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter student rno:");
        scanf("%d",&s1[i].rno);
        printf("enter student sname:");
        scanf("%s",&s1[i].sname);
        printf("enter student per:");
        scanf("%f",&s1[i].per);        
    }    
    for(i=0;i<n;i++)
    {
        if(s1[i].per>=50)
        {
            printf("\n roll no=%d",s1[i].rno);
            printf("\n sname=%s",s1[i].sname);
            printf("\n percentage=%.2f",s1[i].per);
        }
    }
    
}