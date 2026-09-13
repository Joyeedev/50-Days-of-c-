//input
// 10            
// 15
// 30
// 35 2
//output
// 10 
// 15 10 
// 15 10 30 
// 35 15 10 30 

#include <bits/stdc++.h>//https://codeforces.com/problemset/problem/1151/A
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
void print(Node*head){
    Node*current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
ll len(Node*head){
    ll cnt=0;
    Node*current=head;
    while(current!=nullptr){
        current=current->next;
        cnt++;
    }
    return cnt;}
Node* search(Node*head,ll val){
     Node*current=head;
    while(current!=nullptr){
        if(current->data==val){return current;}
        else if(current->data<val){current=current->next;}
        else return nullptr;
        
        
    }
}
int main(){
    Node*head=nullptr;
    ll x;cin>>x;
    
    head=new Node(x,nullptr);
    print(head);

    cin>>x; 
    Node*newNode=new Node(x,nullptr);
    newNode->next=head;
    head=newNode;
    print(head);
    
    
    cin>>x;
    newNode=new Node(x,nullptr);
     Node*current=head; 
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next=newNode;
    print(head);


   ll pos;cin>>x>>pos;
    newNode=new Node(x,nullptr);
   if(pos==1){
    newNode->next=head;
    head=newNode;
    print(head);
    return 0;
   }
   current=head;
  
   for(ll i=0;i<pos-2;i++){
    current=current->next;
   }
   
   newNode->next=current->next;//current=5//35->10(current.next)
   current->next=newNode;      //5->35->10
   print(head);


    





   

    
}