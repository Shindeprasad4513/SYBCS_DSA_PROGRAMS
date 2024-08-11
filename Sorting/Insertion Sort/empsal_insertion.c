#include<stdio.h>
#include<string.h> 
struct emp
{
  int eno,sal;
  char ename[20];
}e1[100],t,key;
void insertion(int n)
{
  int i,j;
  for(i=1;i<n;i++)
  {
    key.sal=e1[i].sal;
    for(j=i-1;j>=0;j--)
    {
     if(key.sal<e1[j].sal)
     {   
      t=e1[j];
      e1[j]=e1[j+1];
      e1[j+1]=t; 
     }
    } 
  }
  printf("\nEmp Info\nEno\tEname\tSalary\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%s\t%d\n",e1[i].eno,e1[i].ename,e1[i].sal);
  }
}
int main()
{
   int i,n;
   printf("Enter Limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("Enter Eno Name Salary:");
     scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
   }
   insertion(n);
}