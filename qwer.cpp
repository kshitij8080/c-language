#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
		printf("%d",j);
	    }

	    printf("\n");
    }
}

