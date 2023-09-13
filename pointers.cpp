#include<iostream>
using namespace std;
int main(){
    int ujjwal[]={1,2,3,4,4,5,5};
    int* p=ujjwal;
    for(int i=0;i<7;i++){
        cout<<"the address of ujjwal at "<<i<<" is "<<(p+i)<<endl;
        cout<<"the value of ujjwal at "<<i<<" is "<<*(p+i)<<endl;
    }


    return 0;

}