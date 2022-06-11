#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
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
void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }cout<<"NULL"<<endl;

}
int length(node* &head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }

    return l;
}
node* kApeend(node* &head, int k){
node* newhead;
node* newTail;
node* tail=head;

int l=length(head);
k=k&l;
int count=1;
while(tail->next!=NULL){
    if(count==l-k){
        newTail=tail;
    }
    if(count==l-k+1){
        newhead=tail;
    }
    tail=tail->next;
    count++;
}
newTail->next=NULL;
tail->next=head;

return newhead;
}
int main(){
node* head =NULL;
insertAtTail(head,10);
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
insertAtTail(head,50);
insertAtTail(head,60);
display(head);
node* newhead=kApeend(head,3);
display(newhead);
return 0;
}