#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,s,s1=0;
    printf("enter number of rows and cols:");
    scanf("%d%d",&r,&c);
    printf("enter matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    printf("\n display matrix \n");
    for(i=0;i<r;i++)
    {
    s=0;
    for(j=0;j<c;j++)
    {
        s=s+a[i][j];
        printf("%d\t",a[i][j]);
        }
        printf("%d\n",s);
        s1=s1+s;
    }
    for(i=0;i<c;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
           s=s+a[j][i];
        }
        printf("%d\t",s);
    }
    printf("%d",s1);
    
}