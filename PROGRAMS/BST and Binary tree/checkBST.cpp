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
bool BSt(node* root,int min, int max){
    if(root==NULL){
        return true;
    }
    if(root->data<min || root->data >max){
        return false;
    }

    return (BSt(root->left,min,root->data) & BSt(root->right,root->data, max));

}
bool isBst(node* root){
    return(BSt(root,INT_MIN,INT_MAX));
}
int main(){
node* root = new node(5);
root->left=new node(2);
root->right=new node(6);
root->left->left=new node(1);
root->left->right=new node(4);
if(isBst(root)){
    cout<<"VAlid BST"<<endl;
}
else{
    cout<<"NOt a valid BST"<<endl;
}
return 0;
}