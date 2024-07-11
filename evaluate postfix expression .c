#include<stdio.h>
#include<ctype.h>
#define max 60
 struct stack 
 {
 	int a[max];
 	int top;
 }s;
 
 void init()
 {
 	s.top=-1;
 }
 
 int isfull()
 {
 
 	if(s.top==max-1)
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
 
 int pop()
 {
 	int val;
 	if(isempty())
 		printf("\nStack empty");
 	else
 	{
 		val=s.a[s.top];
 		s.top--;
 		return val;
 	}
 }
 
 void push(int val)
 {
 	if(isfull())
	{
		printf("\n Stack full");
	} 
	else
	{
		s.top++;
		s.a[s.top]=val;
	}
 
 }
 
 void main()
 {
 	int a,b,c,d,i,val1,val2,res;
 	char postfix[100],ch;
 	printf("Enter postfix string:");
 	scanf("%s",postfix);
 	printf("Enter values of ABCD");
 	scanf("%d%d%d%d",&a,&b,&c,&d);
 	init();
 	for(i=0;postfix[i]!='\0';i++)
 	{
 		ch=postfix[i];
 		if(isalpha(ch))
 		{
 			switch(ch)
 			{
 				case 'A':push(a); break;
 				case 'B':push(b); break;
 				case 'C':push(c); break;
 				case 'D':push(d); break;
 			}
 		
 		}
 		else
 		{
 			val1=pop();
 			val2=pop();
 			switch(ch)
 			{
 				case '+':res=val2+val1; break;
 				case '-':res=val2-val1; break;
 				case '*':res=val2*val1; break;
 				case '/':res=val2/val1; break;
 			}
 		
 			push(res);
 		}
 	}
 	printf("\n Result:%d",pop());
 	
 
 }