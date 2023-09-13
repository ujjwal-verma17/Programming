
// there are two types of header files
// 1. system header files : it comes with compiler
#include<iostream>
// 2. user defined header files : it is written by the programmer 
//#include"this.h"    this will produce error if is not present in the current directory
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Operator in c++"<<endl;
    cout<<"Following are operators in c++ "<<endl;
    // Arthmetic operators
    cout<<" value of a+b "<<a+b<<endl;
    cout<<" value of a-b "<<a-b<<endl;
    cout<<" value of a*b "<<a*b<<endl;
    cout<<" value of a%b "<<a%b<<endl;
    cout<<" value of a/b  "<<a/b<<endl;
    cout<<"value of a++ "<<a++<<endl;// first print 4 then value become 5
    cout<<"value of a-- "<<a--<<endl;// similarly
    cout<<"value of ++a "<<++a<<endl;// first increase then print
    // Assignment operators --> used to assign values to variables
    // int a=4,b=5;
    //Comparision operators
    cout<< "the value of a==b "<<(a==b)<<endl;
    cout<<"the value of a!=b  "<<(a!=b)<<endl;
    cout<<"the value of a<b  "<<(a<b)<<endl;
    //logical operators
    cout<< "the value of a==b && a<b  "<<((a==b) && (a<b))<<endl;
    cout<<"the value of a!=b or a==b  "<<((a!=b) || (a==b))<<endl;
    cout<<"the value of a<b  "<<!(a<b)<<endl;       // not operators


    



    return 0;
}