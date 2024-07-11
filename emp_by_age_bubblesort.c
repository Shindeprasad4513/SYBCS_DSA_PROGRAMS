#include<stdio.h>
#include<stdlib.h>
struct employee 
  {
    int eno;
    char name[20];
    int age;
  }e1[50],t;
int main()
{
  FILE *f1;
  
  int i,n,pass;
  f1=fopen("emp.txt","r");
  if(f1==NULL)
   {
     printf("file not found");
     exit(0);
   }
   i=0;
   while(!feof(f1))
   {
     fscanf(f1,"%d%s%d",&e1[i].eno,&e1[i].name,&e1[i].age);
     i++;
   }
   n=i;
   for(pass=1;pass<n;pass++)
   {
     for(i=0;i<n-pass;i++)
      {
       if(e1[i].age>e1[i+1].age)
        {
          t=e1[i];
          e1[i]=e1[i+1];
          e1[i+1]=t;
        }
      }
   }
   printf("\nEmp Info:\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t%s\t%d\n",e1[i].eno,e1[i].name,e1[i].age);
   }
}
