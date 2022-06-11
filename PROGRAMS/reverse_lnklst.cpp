#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }

};
node* recur_rev(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=recur_rev(head->next);
    head->next->next=head;
    head->next=NULL;
    return(newhead);
}
node* reverse(node* &head){
    node* prev = NULL;
    node* current = head;
    node* nextptr;
    while(current!=NULL){
        nextptr=current->next;
        current->next=prev;
        
        prev=current;
        
        current=nextptr;

    }
    return prev;
}
void display(node* head){
    
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}


int main(){


node* n1 = new node(10);
node* n2 = new node(20);
node* n3 = new node(30);
node* n4 = new node(40);

n1->next=n2;
n2->next=n3;
n3->next=n4;
display(n1);

node* newhead = recur_rev(n1);
display(newhead);


return 0;
}