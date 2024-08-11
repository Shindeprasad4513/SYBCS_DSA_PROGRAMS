#include<stdio.h>
#include<string.h>
void bubble(char a[][6],int n)
{
  int pass,i;
  char t[6];
  for(pass=1;pass<=n-1;pass++)
  {
    for(i=0;i<=n-1-pass;i++)
    {
      if(strcmp(a[i],a[i+1])>0)
      {
        strcpy(t,a[i]);
        strcpy(a[i],a[i+1]);
        strcpy(a[i+1],t);
      }
    }
  }
  printf("\nSorted Months:\n");
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
}
int main()
{
  int i,n=6;
   char a[][6]={"MAY","SEP","OCT","JAN","APR","NOV"};
  printf("\original Months:\n");
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
  bubble(a,n);  
}