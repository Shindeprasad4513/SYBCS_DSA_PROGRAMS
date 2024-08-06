
/*
person.txt
101 om 23
102 sai 51
103 ram 33
104 sham 26
105 aman 45
*/
#include<stdio.h>
int main()
{
  int i,n,pass,index,max;
  FILE *f1;
  struct person
  {
    int pno,age;
    char pname[20];
  }a[100],t;
  f1=fopen("person.txt","r");
  if(f1==NULL)
  {
    printf("File not found");
    exit(0);
  }
  i=0;
  while(!feof(f1))
  {
   fscanf(f1,"%d%s%d",&a[i].pno,&a[i].pname,&a[i].age);
   i++;
  }
  n=i;
  for(pass=0;pass<n;pass++)
  {
    max=a[pass].age;
    index=pass;
    for(i=pass+1;i<n;i++)
    {
      if(a[i].age>max)
      {
        max=a[i].age;
        index=i; 
      }    
    }
   t=a[index];
   a[index]=a[pass];
   a[pass]=t;
  }  
  printf("Person Info:\nPno\tPname\tAge\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%s\t%d\n",a[i].pno,a[i].pname,a[i].age);
  }
}
