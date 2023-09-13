#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    // int a=4;
    // int b=5;
    int glo=89;
    int a=4,b=7;
    float pi=3.145;
    char me='l';
    bool is =true;
    // cout<<"this is tutorial 4.Here the value of a is "<<a<<".the value of b is "<<b;
    // cout<<"\nthe value of pi is  "<<  pi;
    // cout<<"\n me is : "<<me;
    sum();

    cout<<glo<<is;   //first it will search in local function the value of glo then in main
    
    return 0;
}
