//#Lab-9: WAP to reverse given string by using Stack.
//Example: “GeeksQuiz” should be converted to “ziuQskeeG”.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int top=-1;
char Stack[MAX];
void push(char c)
{
	if(top==MAX-1)
		printf("\n Stack is overflow !!");
	else
	{
		top=top+1;
		Stack[top]=c;
	}
}
char pop()
{
	char ch;
	if(top==-1)
		printf("\n Stack is underflow ||");
	else
	{
		ch=Stack[top];
		top=top-1;
		return ch;
	}
}
int main()
{
	int size ,i;
	char str[30],rev_str[30];
	printf("\n Enter the string :: ");
	//scanf("%s",&str);
	//scanf("%[^\n]%*c",&str);
	fgets(str,50,stdin);
	printf("\n The original was : %s ",str);
	size=strlen(str);
	if(size<MAX)
	{
	
	for(i=0;i<size;i++)
		push(str[i]);
	for(i=0;i<size;i++)
		rev_str[i]=pop();
	printf("\n The Reversed string is : %s ",rev_str);
	}
	else
	printf("\nwe cannot find the reverse of this string with following stack !!");
	
}
