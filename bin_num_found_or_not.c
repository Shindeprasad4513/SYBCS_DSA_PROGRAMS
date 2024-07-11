#include<stdio.h>
int main()
{
  int i,a[100],n,num,flag=0,c1=0,top,mid,bottom;
  printf("Enter Limit:");
  scanf("%d",&n);
  printf("Enter %d Numbers in Sorted Order:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter Number to Search:");
  scanf("%d",&num);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    c1=c1+1;
    mid=(top+bottom)/2;
    if(a[mid]==num)
     {
       flag=1;
       break;
     }
    else if(num>a[mid]) 
      top=mid+1;
    else
     bottom=mid-1;
  }
  printf("\nNumber of Compare=%d\n",c1);
  if(flag==1)
    printf("Number is found");
  else
    printf("Number is not found"); 
}