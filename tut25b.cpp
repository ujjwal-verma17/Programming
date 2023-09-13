#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void getData(int x, int y){
            a=x;
            b=y;


    }
        void sum(complex o1, complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;

        }
        void display (void){
            cout<<" the value is "<<a<<" + "<<b<<"i"<<endl;
        }

};
int main(){
    complex o1,o2,o3;
    o1.getData(2,3);
    o1.display();
    o2.getData(1,7);
    o2.display();
    o3.sum( o1 , o2);
    o3.display();


    //sum of complex by objects homework
}