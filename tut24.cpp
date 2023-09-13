#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    static int count;            //by default initialize by 0 //class variable 
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of this employee id  "<<id<<"and this is employee number :"<<count<<endl;
        }

        static void getCount(void){          //only for static variable
            cout<<"the value of count is "<<count<<endl;
        }

};
int Employee ::count; //count=100 is also fine here
                    //count is static data member of class employee
int main(){
    Employee harry,raj,luv;
    harry.setData();
    harry.getData();
    Employee::getCount();
    luv.setData();
    luv.getData();
    Employee::getCount();
    raj.setData();
    raj.getData();
    Employee::getCount();

    return 0;
}