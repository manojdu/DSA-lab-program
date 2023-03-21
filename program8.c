/*8. Design, Develop and Implement a menu driven Program in C for the following operations on
Binary Search Tree (BST) of Integers
a. Create a BST of N Integers
b. Traverse the BST in Inorder, Preorder and Post Order
Program:*/
 #include<stdio.h>
  #include<stdlib.h>
   #include<conio.h>
    struct bst
{
int data;
struct bst *left; 
struct bst *right;
};
typedef struct bst NODE;
NODE *createtree(NODE *node,int data) {
if(node==NULL) //if tree is empty
{
NODE *temp;
temp=(NODE*)malloc(sizeof(NODE)); 
temp->data=data;
temp->left=temp->right=NULL; 
return temp;
}
if(data<(node->data)) //data < rootnode data
{ 
    node->left=createtree(node->left,data); 
}
else if(data>node->data)
//data > rootnode data
{ 
    node->right=createtree(node->right,data);

}
return node;
 }
NODE *search(NODE *node,int data) {
if(node==NULL)
printf("\n element not found"); 
else if(data<node->data)
{
node->left=search(node->left,data);
}
else if(data>node->data)
{ node->right=search(node->right,data); }
else
printf("\n element found is: %d",node->data);
return node; }
Void inorder(NODE *node) {
if(node!=NULL) {
inorder(node->left); 
printf("%d\t",node->data); 
inorder(node->right);
}
}
void preorder(NODE *node)
{ if(node!=NULL)

{ printf("%d\t",node->data); 
preorder(node->left); 
preorder(node->right);
}
}
void postorder(NODE *node) {
if(node!=NULL) {
postorder(node->left); 
postorder(node->right); 
printf("%d\t",node->data);
}
}
void traverse(NODE *node)
{
printf("\n Inorder traversal:\t");
inorder(node); //function call
printf("\n Preorder traversal:\t"); //function call
printf("\n Postorder traversal:\t"); 
postorder(node);
//function call printf("\n");
}
int main() {
int ch,n,i,data; NODE *root=NULL;
preorder(node);

clrscr(); while(1)
{
printf("\n 1.Create binary search tree");
printf("\n 2.Search element in binary search tree"); printf("\n 3.Traversal");
printf("\n 4.exit");
printf("\n enter the choice:"); scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n enter the N value:");
scanf("%d",&n);
printf("\n enter the values to create BST like(34,2,4,5,67)\n"); for(i=0;i<n;i++)
{
scanf("%d",&data);
root=createtree(root,data);
}
break;
case 2:printf("\n enter the element to search:");
scanf("%d",&data);
root=search(root,data); //function call
break;
case 3:traverse(root); //function call
break;
case 4:exit(0); 
default:printf("\n wrong option");
break;
//function call

} }