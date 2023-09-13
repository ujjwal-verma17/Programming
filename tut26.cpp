#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
        void setNumber(int n1 ,int n2){
            a=n1;
            b=n2;
        }
        friend complex Sumcomplex( complex o1, complex o2);  // non member func sumcomplex to give access to private data of complex
        void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
complex Sumcomplex( complex o1 ,complex o2){         // friend function
    complex o3;
    o3.setNumber( o1.a+o2.a ,o1.b+o2.b);
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum=Sumcomplex( c1 , c2);
    sum.printNumber();

    return 0;
}
/*properties of friend functions
1. Not in the scope of the class 
2. since it is not in the scope of the class ,it cannot be called from the object of that class . c1.sumcomplex ()==invalid
3. can be invoked without the help of any object
4. usually contaion the object as arguments
5. can be delared public or private section of the class
6. it cannot access the memebers directly by their names and need object_name.member_name to access any member
*/