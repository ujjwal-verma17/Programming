//copy costructor
#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }
        // when no copy construtor found, compiler supllies its own copy constructor
        Number(Number &obj){
            cout<<"copy constructor called "<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45) , z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);      // copy constructor invoke
    z1.display();
    // z1 should exactly resemble z or y or x
    z2=z;              // no call copy constructor ,,, doing only assignment 
    z2.display();
    Number z3=y;      // will call copy constructor  bcoz  object is in same line
    z3.display();
    return 0;
}