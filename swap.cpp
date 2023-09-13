#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"the value of a is "<<a<<"the value b is "<<b<<endl;
    int* tmp=&a;
    int* p=&b;
    int* k=tmp;
    cout<<"the value of a is "<<*p<<"the value b is "<<*k<<endl;
    

    

    return 0;

}