#include<iostream>
using namespace std;
class polynomial{
    int a,b,c;
    public:
        float sumofroots(void){
            cout<<"The value of sum of roots is    "<<-b/a<<endl;
            //return -b/c;
        }
        float mulofroots(void){
            cout<<"The value of multiplication of roots is   "<<c/a<<endl;
            //return c/a;
        }
        void setValue(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }

};
int main(){
    polynomial p1;
    p1.setValue(1,5,6);
    p1.mulofroots();
    p1.sumofroots();


    return 0;
}