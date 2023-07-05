#include<stdio.h>
 struct stud
 {
 	int rno;
 	char  sname[20];
 	float per;
 }s1[100];
 int main()
 {
 	int n,i,num;
 	printf("enter limit :");
 	scanf("%d",&n);
 	for(i=0; i<n; i++)
 	{
 		printf("enter roll no name  per:");
 		scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
	 }
	 printf("enter student number to search record..");
	 scanf("%d",&num);
	 for(i=0; i<n; i++)
	 {
	 	if(s1[i].rno==num)
	 	 {
	 	 	printf("\n name=%s",s1[i].sname);
	 	 	printf("\n per=%f",s1[i].per);
		  }
		  break;
	 }
	    if(i==n)
	        printf("record not found...");
}