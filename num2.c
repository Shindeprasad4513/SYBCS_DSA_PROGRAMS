#include<stdio.h>
int main()
{
   int i,n,num,a[100];
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
       break;
     }
    }
    if(i==n)
      printf("Number is not found");
    else 
      printf("Number is found");  
}
