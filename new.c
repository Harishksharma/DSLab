#include<stdio.h>
#include<ctype.h>
#define MAX 100

typedef struct stack
{
	char a[MAX];
	int top;
}stack;

void push(struct stack *ps,char n)
{
	if(ps->top!=MAX-1)
	{
		ps->top++;
		ps->a[ps->top]=n;
	}
	else
		printf("\nSTACK IS FULL");
}
char pop(struct stack *ps)
{
	return(ps->a[ps->top--]);
}
int isMatchinpair(char left, char right)
{
	switch(left)
	{
		case'(':if(right==')') return 1; else return 0;
		break;
		case'{':if(right=='}') return 1; else return 0;
		break;
		case'[':if(right==']') return 1; else return 0;
		break;
		default: return 0;
	}
}
void checkbalanced(char exp[])
{
int i;
char c;
stack s;
s.top=-1;
while(exp[i]!='\0')
{
	if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
	
		push(s,exp[i]);
	
	else 
	{
		if(s.top==-1)
		{
     printf(" invalid exp");
     return;
 }
 else
 { 
	 c=pop(&s);
	 if(isMatchingpair(c,exp[i]))
	{
		 i++;
	 continue;
 }
	 else
	 {
		 printf("invalid exp");
		 return;
	 }
 }
}
} i++;
} 

int main()
{
	char exp[30];
	int result;
	printf("ENTER THE  EXPRESSION\n");
	scanf("%s",exp);
	checkbalanced(exp);
	return 0;
}
