/*6. Design, Develop and Implement a menu driven Program in C for the following operations on Doubly Linked List (DLL) of Professor Data with the fields: ID, Name, Branch, Area of
specialization
a. Create a DLL stack of N Professor’s Data.
b. Create a DLL queue of N Professor’s Data
Display the status of DLL and count the number of nodes in it. 
Program:*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
char id[20];
char name[30]; 
char br[20];
char aos[30];
struct node* llink; 
struct node* rlink;
};
struct node* first; 
struct node* getnode()
{
struct node* x;
x=(struct node*)malloc(sizeof(struct node)); 
if(x==NULL)
{
printf("Out of memory\n");
exit(0);
}
return x;
}
void insert_front()
{
struct node* temp;
temp=getnode();
printf("Enter the id:\n"); 
scanf("%s",temp->id);
printf("Enter name:\n"); 
scanf("%s",temp->name);
printf("Enter Branch:\n"); 
scanf("%s",temp->br);
printf("Enter Area of specialization:\n"); 
scanf("%s",temp->aos); 
temp->llink=temp->rlink=NULL;
if(first == NULL) {
first=temp;
}
else
{ temp->rlink=first;

first->llink=temp; first=temp;
}
}
void del_front() {
struct node* temp; if(first == NULL)
{
printf("list is empty\n"); }
else if(first->rlink==NULL)
{
printf("the deleted data\n"); 
printf("Id:%s\n",first->id); 
printf("Name:%s\n",first->name); 
printf("Branch:%s\n",first->br);
printf("Area of specialization:%s\n",first->aos); 
free(first);
first=NULL;
}
else
{
temp=first;
printf("the deleted data\n"); 
printf("Id:%s\n",temp->id); 
printf("Name:%s\n",temp->name); 
printf("Branch:%s\n",temp->br);
printf("Area of specialization:%s\n",temp->aos); 
first=first->rlink;

first->llink=NULL; 
free(temp);
}
}
void display() {
struct node* cur;
if(first == NULL)
{
printf("list is empty\n"); }
else
{
cur=first;
printf("contents of list are:\n"); 
while(cur!=NULL)
{
printf("Id:%s\n",cur->id); 
printf("Name:%s\n",cur->name); 
printf("Branch:%s\n",cur->br);
printf("Area of specialization:%s\n",cur->aos); cur=cur->rlink;
}
}
}
void insert_rear()
{
struct node* temp,*cur;
 temp=getnode();
  printf("Enter the id:\n");

scanf("%s",temp->id);
printf("Enter name:\n");
 scanf("%s",temp->name);
printf("Enter Branch:\n");
 scanf("%s",temp->br);
printf("Enter Area of specialization:\n");
 scanf("%s",temp->aos); temp->llink=temp->rlink=NULL;
if(first == NULL) {
first=temp;
}
else {
cur=first;
while(cur->rlink != NULL) {
cur=cur->rlink;
}
cur->rlink=temp;
temp->llink=cur;
}
}
void stack() {
int c;
do
{ printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
 printf("Enter your choice:\n");

scanf("%d",&c); 
switch(c)
{
case 1: insert_front(); 
break;
case 2: del_front(); 
break;
case 3: display(); 
break;
}
if(c == 4) {
break;
} }while(1);
}
void queue() {
int q;
do
{ printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n"); 
printf("Enter your choice:\n");
scanf("%d",&q); switch(q)
{
case 1: insert_rear(); break;
case 2: del_front(); break;

case 3: display(); break;
}
if(q==4) break; }while(1);
}
void main() {
int ch;
do
{
printf(" 1.Entering data in stack\n 2.Entering Data in queue\n 3.Exit\n"); 
printf("Enter your choice\n");
scanf("%d",&ch); switch(ch)
{
case 1: stack();
        break;
case 2: queue();
        break;
default: exit(0);
 }
}while(1); 
}
