#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float sal;
}e1[100];
int main()
{
    int i,n,ch;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee id name sal:");
        scanf("%d%s%f",&e1[i].id,&e1[i].name,&e1[i].sal);
    }
    do
    {
        printf("\n 1-Disp All \n 2-Disp employee having salary>15000:");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: for(i=0;i<n;i++)
                    {
                        printf("\n emp id=%d",e1[i].id);
                        printf("\n emp name=%s",e1[i].name);
                        printf("\n emp salary=%f",e1[i].sal);
                    }
                    break;
            case 2: for(i=0;i<n;i++)
                    {
                        if(e1[i].sal>=15000)
                        {
                            printf("\n emp id=%d",e1[i].id);
                            printf("\n emp name=%s",e1[i].name);
                            printf("\n emp salary=%f",e1[i].sal);
                        }
                    }
                    break;
            default: printf("Ivalid Choice..");
        }
    } while (ch<3);
}