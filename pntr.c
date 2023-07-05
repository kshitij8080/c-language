#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("enter limit:");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter n numbers:");
       for(i=0;i<n;i++)
       {
        scanf("%d",p+i);
       }
       printf("\n display nos=");
       for(i=0;i<n;i++)
       {
        printf("%d\t",*(p+i));
       }
}