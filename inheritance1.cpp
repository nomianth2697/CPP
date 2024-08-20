#include<iostream>
using namespace std;
class A{
    public:
    void add(int a,int b){
        cout<<"your addition is :"<<(a+b)<<endl;
    }
};
class B:public A{
    public:
    void sub(int a,int b){
        cout<<"your subtraction is :"<<(a-b)<<endl;
    }
};
class C:public A{
    public:
    void multi(int a,int b){
        cout<<"your multiplication is :"<<(a*b)<<endl;
    }
};
int main(){
    C c;
    B b;
    b.add(3,5);
    b.sub(3,5);
    c.add(3,5);
    c.multi(3,5);
    return 0;
}