#include<stdio.h>
 struct emp
{
    int eno;
    char ename[20];
    int sal;
}e1[100];
 int main()
{
    int n,i,id,ch,f=0;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)

    {
        printf("enter emp no:");
        scanf("%d",&e1[i].eno);
        printf("enter emp name:");
        scanf("%s",&e1[i].ename);
        printf("enter emp sal:");
        scanf("%d",&e1[i].sal);
    }
    do
    {
        printf("\n 1-search by id \n 2-display all \n enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: f=0;
                    printf("enter id to search:");
                    scanf("%d",&id);
                    for(i=0;i<n;i++)
                    {
                        if(e1[i].eno==id)
                        {
                            f=1;break;
                        }
                    }
                    if(f==1)
                    printf("record found.....");
                    else
                    printf("record not found....");
                    break;
            case 2: for(i=0;i<n;i++)
                    {
                        printf("\n emp no=%d",e1[i].eno);
                        printf("\n emp name=%s",e1[i].ename);
                        printf("\n emp salary=%d",e1[i].sal);
                    }
                    break;
            deafult : printf("invalid choice.....");
        }
    } while (ch<3);
    
}