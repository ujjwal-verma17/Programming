#include<iostream>
using namespace std;
int fib (int n){
    if (n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    cout<<"enter a number : "<<endl;
    cin>>a;
    cout<<"the term in fibonacci series at position "<<a<< " is "<< fib(a)<<endl;
    return 0;
}