#include<stdio.h>
int main()
{ 
   int i,n,a[100],pass,t;
   printf("Enter Limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     a[i]=rand()%100;
   printf("\nRandom Numbers:\n");  
   for(i=0;i<n;i++)
    printf("%d\n",a[i]);
   for(pass=1;pass<n;pass++)
    {
      for(i=0;i<n-pass;i++)
       {
         if(a[i]>a[i+1])
          {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
          }
       }
    }   
       printf("Sorted Numbers:\n");
       for(i=0;i<n;i++)
       {
        printf("%d\n",a[i]);
       }
}