#include<stdio.h>
int main()
{
   int i,n,num,a[100],flag=0;
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter n Numbers:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter Number to Search:");
   scanf("%d",&num);
   for(i=0;i<n;i++)
    {
     if(a[i]==num)
     {
       flag=1;
       break;
     }
    }
    if(flag==0)
      printf("Number is not found");
    else 
    {
      printf("Number is found\n");  
      if(i==0)
       printf("best case");
      else if(i==n-1)
       printf("worst case"); 
      else 
       printf("average case"); 
    }  
}
