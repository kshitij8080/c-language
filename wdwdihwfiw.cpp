#include<stdio.h>
struct stud
{
    int rno;
    char sname[20];
    float per;
}s1[100];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
      printf("enter student no name per:");
      scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
    }
    for(i=0;i<5;i++)
    {
        printf("\n roll no=%d",s1[i].rno);
        printf("\n name=%s",s1[i].sname);
        printf("\n percentage=%f",s1[i].per);
    }
}
