//constants ,manipulators and operatot precedence
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //int a=34;
    //cout<<"the value of a was"<<a;
    //a=45;
    //cout<<"the value of a is"<<a;
    //constants in c++ 
    //const int a=3;
    //cout<<"the value of a is"<<a<<endl;
    //a=5;         //we will get error as a is constant
    //cout<<"the value of a is"<<a<<endl;
//manipulator in c++  ex- endl;
    //int a=3,b=78,c=1233;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of b is "<<b<<endl;
    // cout<<"the value of c is "<<c<<endl;
    // cout<<"the value of a is "<<setw(4)<<a<<endl;          // give space  of 4
    // cout<<"the value of b is "<<setw(4)<<b<<endl;
    // cout<<"the value of c is "<<setw(4)<<c<<endl;

    //*******operator precedence
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);          //left to right 
    cout<<c;


    return 0;
}