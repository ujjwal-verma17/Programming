#include<iostream>
using namespace std;
class Employee {
    int id;
    int salary;
    public :
        void setId(void){
            salary=122;
            cout<<"Enter the Id of employee "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"the id of this employee is "<<id<<endl;
        }
};


int main(){
    // Employee harry,luv,rohan,shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];         //array of object
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
        

    }
    return 0;
}