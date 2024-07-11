#include<stdio.h>
int main()
{
  int i,n;
  struct city
  {
    char name[20];
  }c1[100],t;
  printf("Enter Limit:");
  scanf("%d",&n);
  printf("Enter N cities:");
  for(i=0;i<n;i++)
  {
    scanf("%s",&c1[i].name);
  }
  printf("Cities before Sorting::");
  for(i=0;i<n;i++)
  {
    printf("%s\n",c1[i].name);
  }
  for(int pass=1;pass<n;pass++)
  {
   for(i=0;i<n-pass;i++)
   {
    if(strcmp(c1[i].name,c1[i+1].name)>0)
    {
      t=c1[i];
      c1[i]=c1[i+1];
      c1[i+1]=t;
    }
   }
  }
  printf("Cities After Sorting::");
  for(i=0;i<n;i++)
  {
    printf("%s\n",c1[i].name);
  }
}