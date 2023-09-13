#include<iostream>
using namespace std;
// function prototype
//type function -name (arguments);
//int sum(int a,int b);          //Acceptable --->..
//int sum(int a,int);// not Acceptable ------>>>
int sum (int , int);           //Acceptable----->>>
//void g(void);        // no type no return
void g();         //also acceptable
int main(){
    int num1 ,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters 
    cout<<"The sum is  "<<sum(num1,num2);
    g();

    return 0;
}
int sum (int a , int b){
    // a and b are formal parameter take value from actual
    int c =a+b;
    return c;
}
void g(){
    cout<<"\n good morning";
}