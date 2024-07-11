/*
  Sort a random array of n integers (accept the value of n from user) in 
  ascending order by using insertion sort algorithm.
 */
#include<stdio.h>
int main()
{
  int i,a[100],n,t,pass,key;
  printf("Enter Limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   a[i]=rand()%100;
  }
  printf("Random elements \n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
  for(pass=1;pass<n;pass++)
  {
    key=a[pass];
    for(i=pass-1;i>=0 && key>a[i];i--)
    {
     t=a[i];
     a[i]=a[i+1];
     a[i+1]=t; 
    }
  }
  printf("\nElements in Ascending Order\n");
  for(i=n-1;i>=0;i--)
   {
    printf("%d\n",a[i]);
   }
}