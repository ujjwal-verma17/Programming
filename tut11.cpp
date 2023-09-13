#include<iostream>
using namespace std;
int main(){
    // for (int i=0;i<4;i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2){
    //         break;             // will break the loop when i==2
    //     }
    // }
    for(int i=0;i<40;i++)
    {
        if (i==2){
            continue;               // i==2 case only skip nothing else
        }
        cout<<i<<endl;
    }
    return 0;
}