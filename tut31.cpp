// CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
        complex (int x , int y){
            a=x;
            b=y;
        }
        complex (int x){
            a=x;
            b=0;
        }
        complex(void){
            a=0;
            b=0;
        }
        void printnumber(){
            cout<< " tour number is "<< a <<" + "<< b <<"i"<<endl;
        }

};
int main(){
    complex c1(4,6);
    c1.printnumber();
    complex c2(9);
    c2.printnumber();
    complex c3;
    c3.printnumber();
    return 0;
}