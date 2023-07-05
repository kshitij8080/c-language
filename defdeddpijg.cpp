#include<stdio.h>
struct emp
{
     int eno;
     char ename[20];
     float sal;
}e1[100];
int main()
{
   int i,n;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("Enter emp no name sal:");
     scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);  
   }
   for(i=0;i<n;i++)
   {
      if(e1[i].sal>=10000)
     {
      printf("\n emp no=%d",e1[i].eno);
      printf("\n emp name=%s",e1[i].ename);
      printf("\n emp sal=%f",e1[i].sal);
     }
   }
}
