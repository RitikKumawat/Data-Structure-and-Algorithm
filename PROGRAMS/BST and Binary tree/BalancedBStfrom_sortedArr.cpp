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
node* constructBStFRomSortArr(int arr[], int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    node* root=new node(arr[mid]);

    root->left = constructBStFRomSortArr(arr,start,mid-1);
    root->right = constructBStFRomSortArr(arr,mid+1,end);

    return root;
}
void printInorder(node* root){
    if(root==NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPreorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
int arr[]={10,20,30,40,50};
node* root = constructBStFRomSortArr(arr,0,4);
printInorder(root);
cout<<endl;
printPreorder(root);

return 0;
}