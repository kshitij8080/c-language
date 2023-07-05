#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],r,c,i,j;
    printf("enter many rows and cols:");
	scanf("%d%d",&r,&c);
	printf("enter matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("display matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
