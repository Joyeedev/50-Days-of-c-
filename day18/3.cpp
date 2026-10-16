#include <bits/stdc++.h>//You are given a singly linked list containing
                       // N integers and a value X.
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
void print(Node*head){
    Node*current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
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
int main(){
    Node*head=nullptr;
    ll n;cin>>n;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
       insert(head,x); 
    }
    ll x;cin>>x;
    Node*current=head;
    ll cnt=0;
    while(current!=nullptr){
    if(current->data==x){cnt++;}
    current=current->next;
    }
    cout<<cnt;
}