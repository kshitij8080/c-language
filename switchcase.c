#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,ch,s=0;
    printf("enter number of rows and cols:");
    scanf("%d",&n);
    printf("enter matrix:");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
do
{
    s=0;
    printf("\n 1-sum of upper trag: \n 2-sum of diagonal: \n enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: for(i=0;i<n;i++)
                 for(j=0;j<n;j++)
                  if(i>j)
                s=s+a[i][j];
                printf("\n sum=%d",s);
                break;
        case 2: for(i=0;i,n;i++)
                 for(j=0;j<n;j++)
                   if(i==j)
                   s=s+a[i][j];
                printf("\n sum of diagonal=%d",s);
                break;
        default : printf("\n invalid choice....");
    }
}while(ch<3);
}