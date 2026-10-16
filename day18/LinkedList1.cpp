#include <bits/stdc++.h>//Given a linked list, insert X at position P
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
int main(){
    ll n;cin>>n;
    Node*head=nullptr;
    for(ll i=0;i<n;i++){
    ll x;cin>>x;
    insert(head,x);
    }
    print(head);
    ll x,p;cin>>x>>p;
    
    insert_pos(head,x,p);
    print(head);

}