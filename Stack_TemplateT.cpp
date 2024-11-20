#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class stack
{
private:
    vector<T>vec;
public:
  void push(T val){
    vec.push_back(val);
  }
  void pop(){
    vec.pop_back();
  }
  T top(){
    int lastIDX=vec.size()-1;
    return vec[lastIDX];
  }
  bool isempty(){
    return vec.size()==0;
  }
};


int main(){
    // stack<string>s;
    // s.push("ariyan");
    // s.push("naaz");
    // s.push("sana sajjad");
    // s.push("saima akram");
    // s.push("alisha sirin");
    // s.push("swarnoptrisha maity");
    // s.push("Tithi Patra");
    stack<char>s;
    s.push('n');
    s.push('a');
    s.push('y');
    s.push('i');
    s.push('r');
    s.push('a');
    s.push('W');
    s.pop();
    cout<<"top : "<<s.top()<<endl;
    while(!s.isempty()){
        cout<<s.top()<<" "<<endl;;
        s.pop();
    }


    return 0;
}