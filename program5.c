/*5. Singly Linked List (SLL) of Integer Data
a. Create a SLL stack of N integer.
b. Display of SLL
c. Linear search. Create a SLL queue of N Students Data Concatenation of two SLL of integers.
Program:*/
 #include<stdio.h>
  #include<stdlib.h>
   #include<string.h>
    typedef struct node 
    {
int info;
struct node *link;
}NODE;
NODE* SLLStack(NODE *Top)
 {
NODE *temp;
int n,i;
printf("Enter the number of nodes to be created in the SLL Stack\n"); scanf("%d",&n);
for(i=0;i<n;i++){
temp=(NODE*)malloc(sizeof(NODE));
printf("Enter the info of node %d\n",i+1);
scanf("%d",&temp->info);
temp->link=NULL;
if(Top==NULL) {
Top=temp;
}
else
{ temp->link=Top; Top=temp;
}
}
printf("SLL Stack of Integers created\n"); return Top;
}
NODE* display(NODE *Top)
{
     NODE *temp;
temp=Top;
printf("SLL Stack of integers\n"); while(temp!=NULL){ printf("%d\t",temp->info); temp=temp->link;
} printf("\n"); return Top;
}
NODE* search(NODE *Top)
{
NODE *temp;
int key,res=0;
printf("enter the key to be searched\n"); scanf("%d",&key);
temp=Top;
while(temp!=NULL){ if(temp->info==key){
res=1;
break;
}else{

temp=temp->link;
}
}
if(res==1)
printf("Key Found is:%d\n"); else
printf("Search Unsuccessful\n");
return Top; }
NODE* concatenate(NODE *f, NODE *s){ NODE *temp;
temp=f;
while(temp->link!=NULL) temp=temp->link;
temp->link=s;
return f; }
void main()
{
int choice;
NODE *Top=NULL,*First=NULL,*Second=NULL; while(1)
{
printf("1.Create SLL Stack...\n2. Display SLL Stack...\n3. LinearSearch\n4.COncatenate\n5.Exit...\n");
printf("Enter Your Choice:\n"); scanf("%d",&choice); switch(choice)
{
case 1: Top=SLLStack(Top); break; case 2: Top=display(Top); break;

case 3: Top=search(Top); break; case 4:
printf("First SLL Creation\n"); First=SLLStack(First); printf("Second SLL Creation\n"); Second=SLLStack(Second); printf("Concatenation\n"); First=concatenate(First,Second); First=display(First);
break;
case 5: exit(0);
default: printf("\nEnter proper Choice...."); }
}
}