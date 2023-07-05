#include<stdio.h>
struct book
{
    char bname[20],author[20];
    float price;
}b1[100];
int main()
{
    int i,n;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter book name author price:");
        scanf("%s%s%f",&b1[i].bname,&b1[i].author,&b1[i].price);
    }
    for(i=0;i<n;i++)
    {
        if(b1[i].price>=350)
        {
            printf("\n Book name=%s",b1[i].bname);
            printf("\n Book author=%s",b1[i].author);
            printf("\n Book Price=%f",b1[i].price);
        }
    }
}