#include<stdio.h>
#include<string.h>
void insertion(char a[20][20],int n)
{
  int i,j;
  char key[20];
  char t[20];
  for(i=1;i<n;i++)
  {
   strcpy(key,a[i]);
   for(j=i-1;j>=0;j--)
   {
     if(strcmp(key,a[j])<0)
     {
       strcpy(t,a[j]);
       strcpy(a[j],a[j+1]);
       strcpy(a[j+1],t); 
     }
   }
  }
  printf("\nSorted Cities:\n");
  for(i=0;i<n;i++)
    printf("%s\t",a[i]);
}
int main()
{
   int i,n;
   char a[20][20];
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("Enter %d Cities:",n);
   for(i=0;i<n;i++)
     scanf("%s",&a[i]);
   insertion(a,n);  
}