 #include<stdio.h>
 int main()
 {
   int i,temp,pass,a[100],n;
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("Enter n numbers:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(pass=1;pass<n;i++)
    {
       for(i=0;i<n-pass;i++)
        {
          if(a[i]>a[i+1])
           {
             temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
           }
        }
    } 
    printf("\nsorted numbers:");
     for(i=0;i<n;i++)
       printf("%d\t",a[i]);
 }
