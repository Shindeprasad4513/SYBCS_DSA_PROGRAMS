#include<stdio.h>
int main()
{
   int i,a[100],pass,max,temp,index,n;
   printf("Enter limit:");
   scanf("%d",&n);
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
        temp=a[pass];
        a[pass]=a[index];
        a[index]=temp;
     }
   }
   printf("\nSorted Numbers\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
}