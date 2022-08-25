#include<iostream>
#include<stack>
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
void zigzag(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> curr_level;
    stack<node*> next_level;
    curr_level.push(root);
    bool lToR=true;
    
    while(!curr_level.empty()){
        node* temp= curr_level.top();
        curr_level.pop();
        if(temp){
            cout<<temp->data<<" ";
        if(lToR){    //Left to right
            if(temp->left){
                next_level.push(temp->left);

            }
            if(temp->right){
                next_level.push(temp->right);
            }
            }
        else{  // Right to left
            if(temp->right){
                next_level.push(temp->right);
            }
            if(temp->left){
                next_level.push(temp->left);

            }
        }
        }
        if(curr_level.empty()){
           lToR = ! lToR;
            swap(curr_level,next_level);
        }
    }
}
int main(){
node* root=new node(12);
root->left=new node(9);
root->right=new node(15);
root->left->left=new node(5);
root->left->right=new node(10);
zigzag(root);
return 0;
}

