#include<stdio.h>
int main()
{
    int a[100],i,n,b[100];
    printf("ente limiy:");
    scanf("%d",&n);
    printf("enterv n numbers:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=a[i]*a[i];

    printf("\n first array:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    printf("\n square array:");
    for(i=0;i<n;i++)
    printf("%d\t",b[i]);
}
