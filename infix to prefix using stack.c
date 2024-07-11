#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 30
struct stack
{
	char a[max];
	int top;
}s;

void init()
{
	s.top=-1;
}

int isempty()
{
	if(s.top==-1)
		return 1;
	else
		return 0;
}

int isfull()
{
	if(s.top==max-1)
		return 1;
	else
		return 0;
}

void push(char ch)
{
	if(isfull())
	{
		printf("\n Stack is full");
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
		printf("\n Stack is empty");
	}
	else
	{
		ch=s.a[s.top];
		s.top--;
		return ch;
	}
}

char peek()
{
	if(!isempty())
	{
	return s.a[s.top];
	}
	return '\0';
}
int precedence(char ch)
{
	if(ch=='(')
		return 0;
	else if(ch=='+' || ch=='-')
		return 1;
	else if(ch=='*' || ch=='/')
		return 2;
	else if(ch=='$' || ch=='^')
		return 3;
}
void reverse(char *str)
{
	int len=strlen(str);
	for(int i=0;i<len/2;i++)
	{
		char t=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=t;
	
	}

}

void main()
{
	char infix[100],ch,prefix[100];
	int i,k=0;
	printf("Enter a infix expression:");
	scanf("%s",infix);
	init();
	reverse(infix);
		for(i=0;infix[i]!='\0';i++)
		{
			if(infix[i]=='(')
			{
				infix[i]=')';
			}
			else if(infix[i]==')')
			{
				infix[i]='(';
			}
		
		}
	for(i=0;infix[i]!='\0';i++)
	{
		ch=infix[i];
		if(ch=='(')
		{
			push(ch);
		}
		else if(ch==')')
		{
			while((ch=pop())!='(')
			{
				prefix[k++]=ch;
			}
		}
		else if(isalpha(ch))
		{
			prefix[k++]=ch;
		}
		else
		{
			while((precedence(peek())>=precedence(ch)) && !isempty())
			{
				prefix[k++]=pop();
			}
			push(ch);
		
		}
		
	}	
	while(!isempty())
		{
			prefix[k++]=pop();
		}
	prefix[k]='\0';
	reverse(prefix);
	printf("\n Prefix string:%s",prefix);	

}