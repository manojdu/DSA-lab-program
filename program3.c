/*3. Design, Develop and Implement a menu driven Program in C for the following operations on STACK of Integers (Array Implementation of Stack with maximum size MAX)
a. Push an Element on to Stack
b. Pop an Element from Stack
c. Demonstrate Overflow and Underflow situations on Stack
d. Display the status of Stack
e. Exit
Support the program with appropriate functions for each of the above operations 
Program:*/
#include<stdio.h>
#include<conio.h>
int size=3,i,x;
int stack[3]; int top=-1; void push()
{ if(top==size-1) {
printf("stack is overflow\n"); }
else
{
printf("enter the element:"); scanf("%d",&x); top=top+1;
stack[top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("the stack is underflow");
}
else
{
printf("the deleted element=%d\n",stack[top]); top=top-1;
}
}
void display()
{

if(top==-1)
{
printf("stack is empty");
}
else
{
printf("elements in stack are:"); for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
void main()
{
int ch;
clrscr();
while(1)
{ printf("\n1.push\n2.pop\n3.display\n4.exit\n"); printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;

case 4:exit(1);
break;
default:printf("invalid inputs"); }
}
getch();
}
