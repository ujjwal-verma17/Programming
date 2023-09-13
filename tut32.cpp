#include<iostream>
using namespace std;
class simple {
    int data1,data2;
    public :
    simple (int a , int b=9){
        data1=a;
        data2=b;

    }
    void printnumber(){
            cout<< " tour data is "<< data1 <<" and "<< data2 <<endl;
        }
    
};
int main(){
    simple s(1,4),s1(3);
    s.printnumber();
    s1.printnumber();
    return 0;
}