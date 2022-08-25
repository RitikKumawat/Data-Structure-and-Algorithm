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
node* ConstructBSt(int preorder[], int *preorderIdx, int key, int min, int max, int n){
    if(*preorderIdx>n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preorderIdx=*preorderIdx +1;
        if(*preorderIdx<n){
            root->left=ConstructBSt(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if(*preorderIdx<n){
            root->right = ConstructBSt(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }

    }
    return root;
}
void printPreordr(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreordr(root->left);
    printPreordr(root->right);
    
}
int main(){
int preorder[] = {10,2,1,13,11};
int n=5;
int preorderIdx= 0;
node* root = ConstructBSt(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
printPreordr(root);
cout<<endl;
return 0;
}