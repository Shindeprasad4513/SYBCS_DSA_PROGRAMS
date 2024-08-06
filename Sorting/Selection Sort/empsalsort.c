//Accept emp info and display in descending order by salary using selection sort
#include<stdio.h>
int main()
{
  int i,n,pass,index,max;
  struct emp
  {
    int eno,sal;
    char ename[20];
  }a[100],t;
  printf("Enter Limit:");
  scanf("%d",&n);
  printf("Enter Emp info:\n");
  for(i=0;i<n;i++)
  {
   printf("Enter eno name sal:");
   scanf("%d%s%d",&a[i].eno,&a[i].ename,&a[i].sal);
  }
  for(pass=0;pass<n;pass++)
  {
   max=a[pass].sal;
   index=pass;
   for(i=pass+1;i<n;i++)
   {
     if(a[i].sal>max)
     {
       max=a[i].sal;
       index=i;
     }
   }
   t=a[index];
   a[index]=a[pass];
   a[pass]=t;
  }
  printf("\n Display:\neno\tename\tsal\n");
  for(i=0;i<n;i++)
   {
     printf("%d\t%s\t%d\n",a[i].eno,a[i].ename,a[i].sal);
   }
}