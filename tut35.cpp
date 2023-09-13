//Destructor
#include<iostream>
using namespace std;
// it never take argument nor return any value
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"this is thr time when constructor is called for object number :"<<count<<endl;
        }
        ~num(){
           cout<<"this is the time when my destructor is called "<<count<<endl;
           count--;

        }
};
int main(){
    cout<<"we are inside namw function "<<endl;
    cout<<" creating first n1 objects "<<endl;
    num n1 ;
    {
        cout<<" Creating two more objects "<<endl;
        num n2 , n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;
}