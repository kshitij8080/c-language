// in the above example i=4   switch pass 4 so case 2+2 that is 4 is exicuted and display output 4?






#include<stdio.h>
int main()
{
    int i = 4;
    switch (i);
    {
        case 2 : printf("two"); break;
        case 2+2 : printf("four ?"); break;
        default : printf("try again");
    }
}