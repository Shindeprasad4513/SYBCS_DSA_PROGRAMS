#include<stdio.h>
int main()
{
  int i,n,pass;
  struct stud
  {
    int rno;
    char name[20];
    float per;
  }s1[100],t;
  printf("Enter Limit:");
  scanf("%d",&n);
  printf("Enter Student rno name per:");
  for(i=0;i<n;i++)
  {
   scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
  }
  for(pass=1;pass<n;pass++)
  {
   for(i=0;i<n-pass;i++)
   {
    if(s1[i].per<s1[i+1].per)
    {
     t=s1[i];
     s1[i]=s1[i+1];
     s1[i+1]=t;
    }
   }
  }
  printf("Student Info by per is in descending order\nRno\tName\tPer\n");
  for(i=0;i<n;i++)
  {
   printf("%d\t%s\t%f\n",s1[i].rno,s1[i].name,s1[i].per);
  }
}