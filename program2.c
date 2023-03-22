/*2. Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Inserting an Element (ELEM) at a given valid Position (POS) b. Deleting an Element at a given valid Position (POS)
c. Display of Array Elements
d. Exit.
Support the program with functions for each of the above operations.*/
#include<stdio.h>
#include<stdlib.h>
int a[10],pos,ele,i,n;
int create(void)
{
printf("enter the size of array:"); scanf("%d",&n);
printf("enter the array elements:"); for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
    
}
    return 1;
}
int display(void)
{
printf("the array elements are:"); for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
    return 1;
}
int insert(void)
{
printf("enter the position of element to be inserted:"); scanf("%d",&pos);
printf("enter the element to be inserted:"); scanf("%d",&ele);
for(i=n;i>=pos;i--) a[i+1]=a[i]; a[pos]=ele; n=n+1;
    return 1;
}
int del(void)
{
printf("enter the position to be deleted:"); scanf("%d",&pos);
ele=a[pos];
for(i=pos;i<n;i++)
a[i]=a[i+1];
n=n-1;
printf("the deleted element is=%d\n",ele);
    return 1;
}
int main()
{
int ch;
while(1)
{ printf("\n1.create\n2.display\n3.insert\n4.delete\n5.exit\n"); printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{

case 1:create();
        break;
case 2:display();
        break;
case 3:insert();
        break;
case 4:del();
        break;
case 5: exit(1);
break;
default:printf("invalid input\n"); }
}
    return 0;
}
