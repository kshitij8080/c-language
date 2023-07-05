#include<stdio.h>
struct student
{
    int rno;
    char sname[20];
    int m1,m2,m3,m4,m5,m6;
}s1;
int main()
{
    int t;
    float p;
    printf("Enter roll no:");
    scanf("%d",&s1.rno);
    printf("Enter name:");
    scanf("%s",&s1.sname);
    printf("Enter six subject marks:");
    scanf("%d%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5,&s1.m6);
    t=s1.m1+s1.m2+s1.m3+s1.m4+s1.m5+s1.m6;
    p=t/6;
    printf("\n roll no=%d",s1.rno);
    printf("\n Name=%s",s1.sname);
    printf("\n Total marks=%d",t);
    printf("\n Percentage=%f",p);
}