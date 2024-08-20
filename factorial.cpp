#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for (int i=1;i<=a;i++){
        fact = fact*i;
    }
    cout<<"\n the factorial is :"<<fact;
    return 0;
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    factorial(n);
    return 0;
}

