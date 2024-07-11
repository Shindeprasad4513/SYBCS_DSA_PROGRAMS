#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
struct stack 
{
    char a[MAX];
    int top;
};
struct stack s; 
void init() 
{
    s.top = -1;
}
int isempty() 
{
    return s.top == -1;
}

int isfull() 
{
    return s.top == MAX - 1;
}

void push(char c) 
{
    if (isfull()) 
    {
        printf("Stack is full\n");
    }
     else 
    {
        s.a[++s.top] = c;
    }
}

char pop() 
{
    if (isempty()) 
    {
        printf("Stack is empty\n");
        return '\0';  
    }
     else 
    {
        return s.a[s.top--];
    }
}
int main() 
{
    char s1[20];
    int i;
    printf("Enter Infix Expression: ");
    scanf("%s", s1);
    init();
    for (i = 0; s1[i] != '\0'; i++) 
    {
        if(s1[i]=='(')
         push(s1[i]);
        if(s1[i]==')')
        pop();
    }
    if(isempty()) 
        printf("Expression is fully paranthesis\n");
    else 
        printf("Expression is not fully paranthesis\n");
}    