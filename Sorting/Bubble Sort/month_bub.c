#include<stdio.h>
#include<string.h>
void bubble(char a[20][20],int n)
{
  int pass,i;
  char t[100];
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
  printf("\nSorted Elements:\n");
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
}
int main()
{
  int i,n;
   char a[20][20];
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("Enter %d Months:",n);
  for(i=0;i<n;i++)
  {
    scanf("%s",&a[i]);
  }
  bubble(a,n);  
}