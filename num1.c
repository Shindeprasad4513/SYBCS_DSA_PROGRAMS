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
       printf("Number is Found\n");
     }
     else
     {
      printf("Numver is not found");
     }
    }
    
}
