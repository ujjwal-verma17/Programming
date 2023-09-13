#include<iostream>
using namespace std;
int main(){
    //int u=13;
    string u="m";
    cout<<"the value of u is  "<<u<<endl;
     cout<<"the address of  is  "<<&u<<endl;
    //int* j=&u;
    string* j=&u;
    cout<<"the address of  is  "<<&u<<endl;


    
    
    cout<<"the address of  is  "<<j<<endl;
    cout<<"the value of u is  "<<*j<<endl;

    return 0;
}