#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The img part is "<< img<<endl;
        }
        void setData(int a ,int b){
            real = a;
            img = b;

        }
};
int main(){
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr =new complex[3];
    //(*ptr).setData(1,3);  is exactly same as 
    ptr->setData(1,3);               // ptr->=*ptr called arrow operator
    ptr->getData();
    //(*ptr).getData();
    (ptr+1)->setData(3,4);
    (ptr+1)->getData();
    (ptr+2)->setData(6,8);
    (ptr+2)->getData();
    

    return 0;
}