/*9. Design, Develop and Implement a Program in C for the following operations on Graph(G) of Cities
a. Create a Graph of N cities using Adjacency Matrix.
b. Print all the nodes reachable from a given starting node in a digraph using DFS/BFS method
Program:*/
#include<stdio.h>
#include<conio.h>
void dfs(int src,int adj[10][10],int visited[10],int n) {
int k;
visited[src]=1;
for(k=0;k<n;k++)
{
if(adj[src][k]==1 && visited[k]==0) {
dfs(k,adj,visited,n); }
}
}
void bfs(int src,int adj[10][10],int n) {
int q[20],front=0,rear=-1,v,u,visited[10]={0}; q[++rear]=src;
visited[src]=1;
printf("src %d to:",src);
while(front<=rear)
{
u=q[front++]; //u=src for(v=0;v<n;v++)
{
if(adj[u][v]==1 && visited[v]==0) //v=dest {
q[++rear]=v;
printf("%d ",v);
visited[v]=1;
}
}
}
}
void main() {
int choice,i,j,src,flag=0;
int adj[10][10],visited[10]={0},n; 
clrscr();
while(1)

{
printf("program to perform graph operations\n"); 
printf("1=>create a graph of N cities\n");
printf("2=>to print reachable nodes from source node using
BFS\n");
printf("3=>to check whether graph is connected or not using
DFS\n");
printf("4=>exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the number of cities\n"); 
scanf("%d",&n);
printf("enter the adjacency matrix\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&adj[i][j]);
break;
case 2:printf("enter the source vertex to start traversal\n"); 
scanf("%d",&src);
printf("vertices visited are ");
bfs(src,adj,n); //function call
break;
case 3:printf("enter the source vertex to start traversal\n"); 
scanf("%d",&src);
for(i=0;i<n;i++) //for the nodes
visited[i]=0; //nodes are not visited
dfs(src,adj,visited,n); //function call
for(i=0;i<n;i++)

if(visited[i]==0) //graph is not connected flag=1;
if(flag==1)
printf("the graph is not connected\n"); 
else
printf("the graph is connected\n"); 
break;
case 4:exit();
}
} }