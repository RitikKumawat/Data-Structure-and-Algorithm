#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data =val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next=head;
    if(head!=NULL){
    head->prev=n;

    }

    head=n;
}
void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    node* temp=head;
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;


}
void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    
    node* temp=head;
    int count=1;
    while(temp!=NULL && count<pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){

    temp->next->prev=temp->prev;
    }

    delete temp;
}
void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }cout<<"NULL"<<endl;

}

int main(){
node* head=NULL;
insertAtTail(head,10);
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
insertAtTail(head,50);
insertAtTail(head,60);
insertAtHead(head,1);
display(head);
deletion(head,4);
display(head);
deletion(head,1);
display(head);
return 0;
}