#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }

};
void preorder(node* &root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* &root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* &root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
node* n =new node(1);
node* temp=n;
n->left=new node(2);
n->right=new node(3);

n->left->left = new node(4);
n->left->right = new node(5);

n->right->left = new node(6);
n->right->right = new node(7);
preorder(n);
cout<<endl;
inorder(n);
cout<<endl;
postorder(n);
cout<<endl;
return 0;
}