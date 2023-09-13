//setdata without passing function and all
#include<iostream>
using namespace std;
class Complex {
    int a,b;
    public:
    //creating a constructor ...,,
    //comstructor is a special member function with same name as of the  class.It is automatically invoked whenever object is created
    //it is used to initialize the objects of its class
    Complex(void);          //Constructor declaration          retrun type is not impotant but imp in other member function
    void printdata()
    {
        cout<< " Your number is "<<a <<"  +  "<<b<<" i"<<endl;
    }
};
Complex :: Complex(void)     //default constructor as it takes no parameter
{
    a=10;
    b=0;
}
int main(){
    Complex c1,c2,c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}
// properties of constructors
/*
1. It should be declared in the puclic section of the class 
2. They are automatically invoked whenever the object is created
3. Donot have return type and they cannot return value
4. It can have default arguments
5. We cannot refer to their address
*/