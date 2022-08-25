#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
node* BuildBSt(node* root, int val){
    if(root==NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left = BuildBSt(root->left,val);
    }else{
        root->right = BuildBSt(root->right,val);
    }

    return root;
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node* root=NULL;
root = BuildBSt(root,5);
BuildBSt(root,1);
BuildBSt(root,3);
BuildBSt(root,4);
BuildBSt(root,2);
BuildBSt(root,7);
inorder(root);
return 0;
}