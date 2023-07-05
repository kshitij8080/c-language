#include<stdio.h>
void symmetric(int a[10][10],int r)
{
    int i,j,f=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                f=0; break;
            }    
        }
    }
    if(f=1)
      printf("symmetric matrix");
     else
      printf("not symmetric matrix");
}
void trace(int a[10][10],int r)
{
    int i,j,s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("sum of diagonal=%d",s);
}
void upper(int a[10][10],int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i>j)
            {
                  printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],i,j,r,ch;
    printf("enter number of rows of square matrix:");
    scanf("%d",&r);
    printf("enter matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    do
    {
        printf("\n 1-symmetric:");
        printf("\n 2-trace matrix:");
        printf("\n 3-upper traingular:");
        printf("\n enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: symmetric(a,r);
            break;
            case 2: trace(a,r);
            break;
            case 3: upper(a,r);
            break;
            default: printf("invalid choice");
        }
    }while(ch<4);
}