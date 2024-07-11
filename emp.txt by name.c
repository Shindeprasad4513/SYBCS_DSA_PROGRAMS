#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
 {
   struct emp
   {
     int eno;
     char name[20];
   }e1[100],t;
   int i,n,pass;
   FILE *f1;
   f1=fopen("emp.txt","r");
   if(f1==NULL)
    {
      printf("File not found");
      exit(0);
    }
    i=0;
    while(!feof(f1))
     {
       fscanf(f1,"%d%s",&e1[i].eno,e1[i].name);
       i++;
     }
     n=i;
     for(pass=1;pass<n;pass++)
     {
       for(i=0;i<n-pass;i++)
       {
         if(strcmp(e1[i].name,e1[i+1].name)>0)
          {
           t=e1[i];
           e1[i]=e1[i+1];
           e1[i+1]=t;
          }
       }
     }
     printf("\nNames=\n");
     for(i=1;i<n;i++)
    {
       printf("\n%d\t%s",e1[i].eno,e1[i].name);
    }
 }