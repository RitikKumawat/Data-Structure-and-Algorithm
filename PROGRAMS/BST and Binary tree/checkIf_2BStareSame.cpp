#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
          data = val;
          left=NULL;
          right=NULL;
          }
};
bool isIdentical(node* root1, node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left,root2->left);
        bool cond3 = isIdentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3 == true){
            return true;
        }
        return false;
    }
}
int main(){
/*
      root1                                              
       5
     /   \
    3     7
   / \     \
  2   4     10

  root2 
       5
     /   \
    3     7
   / \     \
  2   4     8
*/
node* root1=new node(5);
root1->left=new node(3);
root1->right=new node(7);
root1->left->left=new node(2);
root1->left->right=new node(4);
root1->right->right=new node(10);

node* root2=new node(5);
root2->left=new node(3);
root2->right=new node(7);
root2->left->left=new node(2);
root2->left->right=new node(4);
root2->right->right=new node(8);

if(isIdentical(root1,root2)){
    cout<<"BSTs are identical"<<endl;
}
else{
    cout<<"BSTs are non identical"<<endl;
}
return 0;
}