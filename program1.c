/* Develop and Implement a menu driven Program in C for the following Array Operations a. Creating an Array of N Integer Elements
b. Design Display of Array Elements with Suitable Headings c. Exit.
Support the program with functions for each of the above operations.
program: */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> void create();
void display();
int a[10],n,i;
void create()
{
printf("\n enter the size of the array elements"); scanf("%d" ,&n);
printf("enter the elements for the array:\n"); for(i=1;i<=n; i++)
scanf("%d", &a[i]);
}
void display()
{
int i;
printf("\nthe array elements are"); for(i=1;i<=n;i++)
printf("%d",a[i]);
}
void main()
{
 
int ch;
clrscr();
while(1)
{ printf("\n1.create\n2.display\n3.exit"); printf("\nenter your choice:"); scanf("%d",&ch);
switch(ch)
{
case 1:create();"C:\TURBOC3\BIN\ARRAYMEN.C"
break;
case 2:display();
break; case 3:exit(1);
default:printf("\n invalid choice:\n"); }
}
getch();
}