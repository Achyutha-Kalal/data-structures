#include<iostream>
using namespace std;
struct Node
{
int data;
Node *left;
Node *right;
Node(int x)
{
this->data=x;
left=NULL;
right=NULL;
}
};
void insert(struct Node *&root,int val){
    Node *x=new Node(val);
    if(root==NULL)
        root=x;
    else
    {
        if(root->data > val)
            insert(root->left,val);
        if(root->data < val)
            insert(root->right,val);
    }
}
void printInorder(struct Node *root)
{
    if (root == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(root->left); 
  
    /* then print the data of node */
    cout << root->data << " "; 
  
    /* now recur on right child */
    printInorder(root->right);
}
void printPreorder(struct Node *root)
{
    if (root == NULL) 
        return; 
        /* then print the data of node */
    cout << root->data << " ";
  
    /* first recur on left child */
    printPreorder(root->left); 
  
    /* now recur on right child */
    printPreorder(root->right);
}
void printPostorder(struct Node *root)
{
    if (root == NULL) 
        return; 
   
  
    /* first recur on left child */
    printPostorder(root->left); 
  
    /* now recur on right child */
    printPostorder(root->right);
         /* then print the data of node */
    cout << root->data << " ";
}
int main()
{
    cout<<"Begins";
    Node *head=new Node(2);
    insert(head,1);
    insert(head,3);
    cout<<"\n";
    printInorder(head);
    cout<<"\n";
    printPreorder(head);
    cout<<"\n";
    printPostorder(head);
    cout<<"\n";
    cout<<head->left->data<<" "<<head->data<<" "<<head->right->data;
    cout<<"\n";
    cout<<"Ends";
}
