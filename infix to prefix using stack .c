/*
   Write a program to convert an infix expression of the form 
   (a*(b+c)*((d-a)/b)) into its equivalent postfix notation. 
   Consider usual precedence’s of operators.
   Use stack library of stack of characters using static 
implementation.
*/
#include<stdio.h>
#include<ctype.h>
#define max 50
struct stack 
{
	char a[max];
	int top;
}s;
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
	return s.top == max - 1;
}
void push(char ch) 
{
	if (isfull()) 
    {
		printf("\n Stack is full");
	} else {
		s.top++;
		s.a[s.top] = ch;
	}
}
char pop() 
{
	if (isempty()) 
    {
		printf("\n Stack is empty");
		return -1; 
	} else {
		return s.a[s.top--];
	}
}
char peek() 
{
	if (!isempty()) 
    {
		return s.a[s.top];
	}
	return -1; 
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
void main() 
{
	char infix[100], ch;
	int i;
	init();
	printf("Enter infix expression: ");
	gets(infix);
	printf("\nPostfix string: ");
	for (i = 0; infix[i] != '\0'; i++) 
    {
		ch = infix[i];
		if (ch == '(') 
        {
			push(ch);
		} 
        else if (ch == ')') 
        {
			while ((ch = pop()) != '(') 
            {
				printf("%c", ch);
			}
		} 
        else if (isalpha(ch)) 
        {
			printf("%c", ch);
		} 
        else  
        {
			while (!isempty() && precedence(peek()) >= precedence(ch)) 
            {
				printf("%c", pop());
			}
			push(ch);
		}
	}
	while (!isempty()) 
    {
		printf("%c", pop());
	}
}

/*
#include <stdio.h>
#include <ctype.h>
#define MAX 100

struct stack {
    char items[MAX];
    int top;
};

void init(struct stack *s) {
    s->top = -1;
}

int isempty(struct stack *s) {
    return s->top == -1;
}

int isfull(struct stack *s) {
    return s->top == MAX - 1;
}

void push(struct stack *s, char value) {
    if (isfull(s)) {
        printf("Stack is full\n");
        return;
    }
    s->items[++(s->top)] = value;
}

char pop(struct stack *s) {
    if (isempty(s)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return s->items[(s->top)--];
}

char peek(struct stack *s) {
    if (isempty(s)) {
        return '\0';
    }
    return s->items[s->top];
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void infixToPostfix(char* infix, char* postfix) {
    struct stack s;
    init(&s);
    int i = 0, j = 0;
    char ch;

    while (infix[i] != '\0') {
        ch = infix[i];

        if (isalnum(ch)) { // if the character is an operand
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(&s, ch);
        } else if (ch == ')') {
            while (!isempty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); // remove '(' from the stack
        } else { // if the character is an operator
            while (!isempty(&s) && precedence(peek(&s)) >= precedence(ch)) {
                postfix[j++] = pop(&s);
            }
            push(&s, ch);
        }
        i++;
    }

    // pop all remaining operators in the stack
    while (!isempty(&s)) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0'; // null-terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    // Removing newline character from the end if present
    size_t len = strlen(infix);
    if (len > 0 && infix[len-1] == '\n') {
        infix[len-1] = '\0';
    }

    infixToPostfix(infix, postfix);
    printf("The equivalent postfix expression is: %s\n", postfix);

    return 0;
}
*/