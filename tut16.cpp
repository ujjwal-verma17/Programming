//call by value and references
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
//this will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

}
//call by reference using pointers
void swapPointer(int* a, int* b){
    cout<<"the address of a "<<a<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;

}
//call by reference using C++ reference variables
void swapReferenceVar(int  &a, int &b){            //& lecture 7
     //cout<<"the address of a "<<a<<endl;
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int x=4, y=5;
    //cout<<"The value of sum of 4 and 5 is "<<sum(a,b); 
    cout<<"The value of x is  "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y); this will not swap a and b
    //swapPointer(&x,&y); // this will swap a and b
    swapReferenceVar(x,y);
    cout<<"The value of x is  "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}