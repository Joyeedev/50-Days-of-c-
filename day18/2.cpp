#include <bits/stdc++.h>//You are given a singly linked list containing N integers and a value X.
using namespace std;
#define ll long long
struct Node{
    ll data;
    Node*next;
    public:
    Node(ll data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(ll data1){
        data=data1;
        next=nullptr;
    }

};
Node*linkedlist(vector<ll>&arr){
    Node*head=new Node(arr[0],nullptr);
    Node*current=head;
    for(ll i=1;i<arr.size();i++){
      Node*newNode=new Node(arr[i],nullptr);
      current->next=newNode;
      current=newNode;
    }
    return head;
}
void insert(Node*&head,ll x){
     
     Node*newNode=new Node(x,nullptr);
     if(head==nullptr){
     head=newNode;
     return;
     }
     else{
        Node*current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        current->next=newNode;

     }
}
void insert_big(Node*&head,ll x){
    Node*newNode=new Node(x,nullptr);
    newNode->next=head;
    head=newNode;
}
void insert_pos(Node*&head,ll x,ll pos){
    Node*newNode=new Node(x,nullptr);
    
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node*current=head;
    for(ll i=0;i<pos-2;i++){
        current=current->next;
    }
    newNode->next=current->next;
    current->next=newNode;
}
void print(Node*head){
    Node*current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
ll search(Node*head,ll x){
    Node*current=head;
    ll pos=1;
    while(current!=nullptr){
    if(current->data==x){return pos;}
    else{
    current=current ->next;
    pos++;
    }}
     return -1;
    
}
int main(){
    ll n;cin>>n;
    Node*head=nullptr;
    for(ll i=0;i<n;i++){
    ll x;cin>>x;
    insert(head,x);
    }
    ll x;cin>>x;
    cout<<search(head,x)<<endl;

   

}