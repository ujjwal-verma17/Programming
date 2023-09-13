#include<iostream>
using namespace std;
class Base {
    protected:
    int a;
    private:
    int b;
    
        // void setData(int t,int r){
        //     a=t;
        //     b=r;
        // }
        // void getData(){
        // cout<<"the value of a and b are "<<a<<" and "<<b<<endl;
        // }

};
/*For a protected member :
                        Public derivation            Private Derivation              Protected Derivation
1.Private members       Not Inherited                 Not inherited                  Not inherited          
2.protected members     Protected                     Private                        Protected
3.public members        public                        Private                        Protected                
*/
class Derived : protected Base{
    public:
    void printdata(int t){
        a=t;
        cout<<"the value of a is "<<a<<endl;
    }

    // public:
    // void mydata(){
    //     setData(3,4);
    //     getData();
    // }

};
int main(){
    Base b;
    Derived d;
    d.printdata(5);
    //cout <<d.a;         //'''will not work as a is protected in both base and derived
    // Derived d1;
    // d1.mydata();
    return 0;
}