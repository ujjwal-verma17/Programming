#include<iostream>
using namespace std;
int c=45;
int main(){
    // ********build in data types
    //int a,b,c;
    
    //cout<<"enter tha value of a :"<<endl;
    //cin>>a;
    //cout<<"enter the value of b :"<<endl;
    //cin>>b;
    //c=a+b;
    //cout<<"the sum is c :"<<c;
    //cout<<"the globe c is  :"<<::c;       //scope resolution to print global value
    //******Float,doubleand long double literals****
    //float d=34.4f;         // if is not by default long will be given 
    //long double e=34.4l;
    //cout<<"the size of 34.4f is"<<sizeof(34.4)<<endl;  //size of double
    //cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl; 
    //cout<<"the size of 34.4F is"<<sizeof(34.4F)<<endl; 
    //cout<<"the size of 34.4l is"<<sizeof(34.4l)<<endl;                 
    //cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl; 
    //cout<<"the value d id "<<d<<endl<<"the value of e is "<<e;
     //******reference variables****
    // shubham-->shubh---->rohu----->dangerous coder
    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;
     //******type casting****
    int a =45;
    float b=45.67;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of b is "<<(int)a<<endl;
    cout<<"the value of a+b "<<a+b<<endl;
    cout<<"the value of a+int(b) "<<a+int(b)<<endl;
    cout<<"the value of a+(int)b  "<<a +(int)b<<endl;



    return 0;
}