/*7. Given an array of elements, construct a complete binary tree from this array in level order fashion. That is, elements from left in the array will be filled in the tree level wise starting from level 0.
Ex:Input : arr[]={1,2,3,4,5,6}
Output : Root of the following tree
1 /\ 23
/\ /\ 456
Program:*/
#include<stdio.h> 
#include<stdlib.h>
struct node
{
int info;
struct node *left,*right;
};
typedefstruct node *NODE;
void inorder(NODE root) {
if(root!=NULL) {
inorder(root->left); printf("%d ",root->info); inorder(root->right);
} }
void preorder(NODE root) {
if(root!=NULL) {
printf("%d ",root->info); preorder(root->left); preorder(root->right);
}
}
void postorder(NODE root) {
if(root!=NULL) {

postorder(root->left); postorder(root->right); printf("%d ",root->info);
} }
void level_order(NODE ptr) {
int front=0, rear = 0;
NODE queue[20];
if(!ptr) // empty tree; return;
queue[rear++]=ptr; //addq(front, &rear, ptr); while(front<rear)
{
ptr = queue[front++]; if(ptr!=NULL)
{
printf("\n %d ",ptr->info); if (ptr->left) queue[rear++]=ptr->left; if (ptr->right) queue[rear++]=ptr->right;
}
printf(" front=%d rear=%d\n", front, rear);
}
printf(" \n ending.... \n\n");
}

NODE insert(NODE root,int data) {
NODE newnode, parent, cur; newnode=(NODE)malloc(sizeof(struct node)); newnode->left=newnode->right=NULL; newnode->info=data;
if(root==NULL) {
root=newnode; return root; }
parent=NULL; cur=root; while(cur!=NULL)
{
if(cur->info==data) {
printf("\nNode is already present in the tree\n");
return(root); }
if(cur->info < data) {
parent=cur; cur=cur->right;
} else {
parent=cur; cur=cur->left;
} }

if(parent->info<data) parent->right=newnode; else parent->left=newnode; return(root);
}
void search_node(NODE root, int key) {
NODE cur,parent,successor; if(root==NULL)
{ printf("\nTree is empty\n"); return ;
} cur=root;
while(cur!=NULL) {
if(key==cur->info) break;
parent=cur;
if(key < cur->info) cur=cur->left;
else cur=cur->right; } if(cur==NULL) {

printf("\nData is not found\n"); return ; }
printf("\nData %d is found\n",key); return ;
}
int main() {
int choice,data,key;
NODE root=NULL;
NODE create(NODE,int);
NODE delete_node(NODE,int); //clrscr();
while(1) {
printf("1:Create Tree\n");
printf("2:TREE TRAVERSAL\n");
printf("3.SEARCH\n");
printf("4.Level_Order\n");
printf("5.EXIT\n");
printf("\nEnter your choice=\n");
scanf("%d",&choice); switch(choice)
{
case 1 :
printf("\nEnter data to be inserted\n");
scanf("%d",&data); root=insert(root,data);
break;

case 2 :
OUTPUT:
if(root==NULL) printf("\nEMPTY TREE\n"); else
{
printf("\nThe inorder display : ");
inorder(root);
printf("\nThe preorder display : ");
preorder(root);
printf("\nThe postorder display : ");
postorder(root);
printf("\n");
}
break;
case 3 :
printf("\nenter the key to search and delete:\n");
scanf("%d",&key);
search_node(root,key);
break;
case 4 : level_order(root);
break;
case 5 :
return 0;
}
}
return 0;