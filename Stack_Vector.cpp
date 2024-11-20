#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val);

    }
    void pop(){
        if(isempty()){
            cout<<"stack is empty";
            return;
        }
        vec.pop_back();
    }
    int top(){
        if(isempty()){
            cout<<"stack is empty";
            return -1;
        }
        int lastIDX=vec.size()-1;
        return vec[lastIDX];

    }
    bool isempty(){
       
        return vec.size()==0;
        
    }
};
int main(){
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    s.push(4);
    cout<<"top element is : "<<s.top()<<endl;
    cout<<"stack is :"<<endl;
    while(!s.isempty()){
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    


    return 0;
}
