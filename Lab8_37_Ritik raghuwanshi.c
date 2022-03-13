//#include<Lab8_37_Ritik raghuwanshi.c>
/*#Lab-08 : WAP to find whether the given string is a palindrome or
not using Stack if given a string str
Examples:
Input: str = “geeksforgeeks”
Output: No
Input: str = “madam”
Output: Yes
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int top=-1;
char Stack[MAX];
void push(char data )
{
	if(top==MAX-1)
		printf("\n The stack is over flow !! \n ");
	else
	{
		top=top+1;
		Stack[top]=data;
	}
}
char pop()
{	
	char data;
	if(top==-1)
		printf("\n The stack is under flow ||\n ");
	else
	{
		data=Stack[top];
		top=top-1;
		return data;
	}
}
void main()
{
	int i,size,flag=1,asc;
	char str[20],rev_str[20],ele;
	printf("\n Enter the string :: ");
	scanf("%s",&str);
	size=strlen(str);
	for(i=0;i<size;i++)
	{
		ele=str[i];
		push(ele);
	}
	for(i=0;i<size;i++)
	{
		rev_str[i]=pop();
	}
	for(i=0;i<size;i++)
	{
		if(rev_str[i]!=str[i])
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\n The string %s is a pallindrome ",str);
		printf("\n YES...");
	}
	else
	{
		printf("\n string is not pallindrome ");
		printf("\n No___");
	}
		
}
