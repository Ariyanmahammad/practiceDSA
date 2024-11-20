#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;
template<class T>
class stack{
    list<T>ll;
    public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    T top(){
        return ll.front();
    }
    bool isempty(){
        return ll.size()==0;
    }
};
int main(){
        //  stack<int>s;
        //  s.push(3);
        //  s.push(2);
        //  s.push(1);
        //  s.pop();
        stack<string>s;
        s.push("Ariyan");
        s.push("Saima");
        s.push("Alisha");
        s.push("Swarnotrisha");
        s.push("Tithi");
        

         cout<<"top : "<<s.top()<<endl;
         while(!s.isempty()){
            cout<<s.top()<<" "<<endl;
            s.pop();
         }

    return 0;
}