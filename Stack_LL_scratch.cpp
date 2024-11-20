
///IMPORTANT FOR YOUR INTERVIEW

#include<iostream>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node* next;
    node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class stack{
    public:
    node<T>* head;
    stack(){
        head = NULL;  // Corrected initialization
    }
    
    void push(T val){
        node<T>* newNode = new node<T>(val);
        if(head == NULL){
            head = newNode;  // Corrected the assignment
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void pop(){
        if(head != NULL) {
            node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    T top(){
        return head->data;
    }
    
    bool isempty(){
        return head == NULL;
    }
};

int main(){
    stack<char> s;
    s.push('n');
    s.push('a');
    s.push('y');
    s.push('i');
    s.push('r');
    s.push('A');
    while(!s.isempty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
