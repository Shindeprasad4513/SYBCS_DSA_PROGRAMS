#include<stdio.h>
int main()
{
   int i,n,pass,a[100],index,max;
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter %d Numbers: ",n);
   for(i=0;i<n;i++) 
   {
     scanf("%d",&a[i]);
   }
   for(pass=0;pass<n;pass++)
   {
     max=a[pass];
     index=pass;
    for(i=pass+1;i<n;i++) 
     {
       if(a[i]>max)
       {
         max=a[i];
         index=i;
       }
     }
     a[index]=a[pass];
     a[pass]=max;
   }
   printf("sorted numbers:\n");
   for(i=0;i<n;i++) 
   {
     printf("%d\t",a[i]);
   }
}
    