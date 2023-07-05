#include<stdio.h>
 struct stud
 {
 	int rno;
 	char  sname[20];
 	float per;
 }s1[100];
 int main()
 {
 	int n,i,flag=0;
 	char name[20];
 	printf("enter limit :");
 	scanf("%d",&n);
 	for(i=0; i<n; i++)
 	{
 		printf("\nenter rollno name per  :");
 		scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
	 }
	 printf("enter student name to search record..:");
	 scanf("%s",&name);
	 for(i=0; i<n; i++)
	 {
	 	if(strcmp(s1[i].sname,name)==0)
	 	{
	 		flag==1;
	 		break;
		 }
	 }
	 	if(flag==0)
	 	 {
	 	 	printf("\n rno=%d",s1[i].rno);
	 	 	printf("\n per=%f",s1[i].per);
		  }
		else
		{
	        printf("\n record not found...");
        }
}
