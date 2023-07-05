#include<string.h>
int main()
{
 char s1[100][100],nm[50];
 int i,n,flag=0,top,mid,bottom;
 printf("Enter limit:");
 scanf("%d",&n);
 printf("Enter n city name in sorted order:");
 for(i=0;i<n;i++)
 scanf("%s",&s1[i]);
 printf("Enter city to search:");
 scanf("%s",nm);

 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(s1[mid],nm)==0)
  {
   flag=1;
   break;
  }
  if(nm>s1[mid])
   top=mid+1;
  else
   bottom=mid-1;
 }
 if(flag==1)
  printf("Name is found...");
 else
  printf("name is not found...");
}
