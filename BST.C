#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
 int data;
 struct Node* left;
 struct Node* right;
};

struct Node* createNode(int value){
 struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->data=value;
 newNode->left=NULL;
 newNode->right=NULL;
  return newNode;
}

struct Node* insert(struct Node* root,int value)
 {
  if(root==NULL)
   {
    return createNode(value);
   }
  if(value<root->data)
   {
    root->left=insert(root->left,value);
   }
  else if(value>root->data)
   {
    root->right=insert(root->right,value);
   }
 return root;
}

void inorder(struct Node* root)
 {
  if(root!=NULL)
   {
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
   }
 }

int main()
 {
  struct Node*root=NULL;
  int n,value,i;
  clrscr();
   printf("Enter the number of elements:");
   scanf("%d",&n);

   printf("\n Enter %d elements:",n);
    for(i=0;i<n;i++)
     {
      scanf("%d ",&value);
      root=insert(root,value);
     }
   printf("Inorder Traversal:\n");
   inorder(root);
   printf("\n");
   getch();
 return 0;
}