#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	float per;
}s1[100],temp;
int main()
{
  int i,j,n;
  printf(" \n Enter n:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter name rollno per:");
	 scanf("%s%d%f",s1[i].name,&s1[i].rno,&s1[i].per);	
  } 
   for(i-0;i<n-1;i++)
   {
   	 for(j=i+1;j<n;j++)
   	 {
   	    if(s1[i].per>s1[j].per)
		   {
		   	 temp=s1[i];
		   	 s1[i]=s1[j];
		   	 s1[j]=temp;
		   } 	
	 }
   }
   printf("sorted records are");
   for(i=0;i<n;i++)
   {
   	printf("\n name=%s",s1[i].name);
   	printf("\n roll no=%d",s1[i].rno);
   	printf("\n per=%f",s1[i].per);
   }
}
