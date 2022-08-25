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
    int lheight = height(root->left);
    int rheight = height(root->right);

    return max(lheight,rheight)+1;
}
bool isBalanced(node* root){                     /// Time Complexity of this function is O(n^2) 
    if(root==NULL){                             ///  To reduce this complexity to O(n) another approach is given below
        return true;
    }

    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }

}

bool IsBALANCED(node* root, int* height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(IsBALANCED(root->left,&lh)==false){
        return false;
    }
    if(IsBALANCED(root->right,&rh)==false){
        return false;
    }
    *height = max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
node* root1=new node(1);
root1->left=new node(2);
root1->right=new node(3);
root1->left->left=new node(4);

node* root2=new node(1);
root2->left=new node(2);
root2->right=new node(3);
root2->left->left=new node(4);
root2->left->left->right=new node(5);

int height=0;
if(IsBALANCED(root1,&height)){
    cout<<"Tree is Balanced"<<endl;
}
else{
    cout<<"nOt a balnced Tree"<<endl;
}
if(IsBALANCED(root2,&height)){
    cout<<"Tree is Balanced"<<endl;
}
else{
    cout<<"nOt a balnced Tree"<<endl;
}
return 0;
}