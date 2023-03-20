/*4.Design,develop and implement a program in c for the following stack applications: a. Evaluation of suffix expression with single digit operands and operators :+,-,*,/,%,^. b. Solving Tower of Hanoi with N discs
program:*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int count, top=-1;
int operate(char symb, int op1, int op2)
{
switch(symb)
{
case '+':return op1+op2;
case '-':return op1-op2;
case '/':return op1/op2;
case '*':return op1*op2;
case '%':return op1%op2; case '^':return pow(op1,op2); }
}
void push(int stack[],int d)
{
stack[++top]=d;
}
int pop(int stack[])
{
return(stack[top--]);
}
void tower( int n,char src, char intr, char des)
{
if(n)
{
tower(n-1,src,des,intr);
printf("\ndisk %d moved from %c to %c",n,src,des); count++;
tower(n-1,intr,src,des);
}
}
void main()
{
int n, choice,i,op1,op2,ans,stack[50];
char expr[20],symb;

while(1)
{
printf("\n\nProgram to perform evaluation of suffix expression and tower of hanoi problem\n");
printf("\n 1. Evaluate suffix expression\n 2. Tower of hanoi\n 3. Exit\n "); printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter the suffix expression : ");
scanf("%s",expr);
for(i=0;expr[i]!= '\0';i++)
{
symb=expr[i];
if(symb>='0' && symb<='9')
push(stack, symb-'0');
else
{
op2=pop(stack);
op1=pop(stack);
ans=operate(symb,op1,op2);
push(stack,ans);
}
}
ans=pop(stack);
printf("\nThe result is %d",ans);
break;
case 2: printf("\nEnter the number of disks:");
scanf("%d",&n);
count=0;

tower(n,'a','b','c');
printf("\nTotal number of moves: %d",count); break;
case 3: return;
}
}
}