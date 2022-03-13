#include<stdio.h>
#include<stdlib.h>
#define max 5

int top=-1,stack[max];

void push()
{
	int data;
	if(top==max-1)
		printf("\n stack is overflow ");
	else
	{
		printf("\n push element in stack ");
		scanf("%d",&data);
		top=top+1;
		stack[top]=data;
	}
}
void pop()
{
	int data;
	if(top==-1)
		printf("\n stack is underflow");
	else
	{
		data=stack[top];
		printf("\n pop element from the stack %d ",data);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("\n stack is under flow ");
	else
	{
		printf("\n stack is :- ");
		for(i=top;i>=0;i--)
		{
			printf("\n :)%d ",stack[i]);
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n ***** Stack Operations *****\n ");
		printf("1.push\n2.pop\n3.display\n4.exit");
		printf("\nEnter the choice(1 to 4) :: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4:	exit(0);
			default:printf("\n entered wrong choice ");
		}
	}
	return 0;
}
