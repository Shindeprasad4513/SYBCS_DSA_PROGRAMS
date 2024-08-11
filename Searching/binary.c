#include<stdio.h>
int search(int a[],int n,int key)
{
   int top=0,bottom=n-1,mid;
   while(top<=bottom)
   {
       mid=(top+bottom)/2;
           if(key==a[mid]) 
           {
              return mid;
              break;
            }
            else if(key>a[mid])
            {
              top=mid+1;
            } 
            else
            {
              bottom=mid-1;
            }
   }
}
void main()
{
   int a[100],i,n,key,f=0,pos;
   printf("Enter Limit:");
   scanf("%d",&n);
   printf(" Enter n Elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter key Element:");
   scanf("%d",&key);
   pos=search(a,n,key);
    printf("Key is found at %d",pos);
}
