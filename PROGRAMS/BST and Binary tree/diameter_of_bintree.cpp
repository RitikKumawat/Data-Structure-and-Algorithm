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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    
    return max(height(root->left),height(root->right))+1;
}
int Diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);
    int curr_diameter = lheight +rheight +1;

    int ldiam = Diameter(root->left);
    int rdiam = Diameter(root->right);
    
    return max(curr_diameter,max(ldiam,rdiam));
}

// We can also calculate Diameter in efficient way
int calDiameter(node* root, int *height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldiam = calDiameter(root->left,&lh);
    int rdiam = calDiameter(root->right,&rh);
    int curr_diam = lh+rh+1;
    *height =max(lh,rh)+1;

    return max(curr_diam,max(ldiam,rdiam));
}
int main(){
node* root=new node(1);
root->left =new node(2);
root->right =new node(3);
root->left->left =new node(4);
root->left->right =new node(5);
root->right->left =new node(6);
root->right->right =new node(7);
cout<<Diameter(root)<<endl;
int height=0;
cout<<calDiameter(root,&height)<<endl;
return 0;
}