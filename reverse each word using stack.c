#include<stdio.h>
#include<string.h>
#define MAX 50
struct stack
{
  char a[MAX];
  int top;
}s;
init()
{
  s.top++;
}
int isfull()
{
  if(s.top==MAX-1)
    return 1;
  else
    return 0;  
} 
int isempty()
{
  if(s.top==-1)
    return 1;
  else
    return 0;  
}
void push(char ch)
{
  if(isfull())
  {
   printf("Stack is full");
  }
  else
  {
    s.top++;
    s.a[s.top]=ch;
  } 
}
char pop()
{
  char ch;
  if(isempty())
    {
      printf("Stack is empty");
    }
  else
    {
      ch=s.a[s.top];
      s.top--;
    }  
}
void rev(char s1[])
{
  int l,i;
  char t;
  l=strlen(s1);
  for(i=0;i<l/2;i++)
  {
    t=s1[i];
    s1[i]=s1[l-1-i];
    s1[l-1-i]=t;
  }
}
int main()
{
  char s1[100],*s2;
  init();
  printf("Enter String;");
  gets(s1);
  s2=strtok(s1," ");
  push(s1);
  while(s2!=NULL)
  {
     rev(s2);
    printf("\n%s",s2);
    s2=strtok(NULL," ");
  }
  pop();
}  