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
int Height_tree(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=Height_tree(root->left);
    int rheight=Height_tree(root->right);
    return max(lheight,rheight)+1;
}
int main(){
node* root =new node(1);
root->left= new node(2);
root->right= new node(3);
root->left->left= new node(4);
root->left->right= new node(5);
cout<<"HEight of Tree is "<<Height_tree(root)<<endl;
return 0;
}