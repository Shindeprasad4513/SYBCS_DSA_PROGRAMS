#include<stdio.h>
void insertionsort(int a[],int n)
{
  int i,j,key,t;
  for(i=1;i<n;i++)
  {
  key=a[i];
    for(j=i-1;j>=0;j--)
    {
      if(key<a[j])
      {
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;   
      }
       
    }    
  }
  printf("\nSorted Array\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}
int main()
{
  int i,n,a[100];
  printf("Enter Limit:");
  scanf("%d",&n);
  printf("Enter %d Numbers:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  insertionsort(a,n);
}
