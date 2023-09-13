#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a= a;
            cout<<a<<endl;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
        int main(){
            A a;
            a.setData(4);
            a.getData();
    return 0;
}