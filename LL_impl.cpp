#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data , node*next=NULL){
        this->data=data;
        this->next=next;
    }
};
class list{
    public:
    node*head;
    node*tail;
    list(){
        this->head=NULL;
        this->tail=NULL;
    }
    void PushFront(int val){
        node*newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;

        }
        else{
            newNode->next=head;
           head=newNode;
        }
    }
    void pushBack(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printList(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

};
int main(){
    list LL;
    LL.PushFront(1);
    LL.PushFront(2);
    LL.PushFront(3);
    LL.PushFront(4);
    LL.PushFront(5);
    LL.PushFront(6);
    LL.PushFront(7);
    LL.PushFront(8);
    LL.PushFront(9);
    LL.pushBack(0);

    LL.printList();
   

    return 0;
}

//success