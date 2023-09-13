#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
        void setdata (int a, int b){
            id=a;
            price=b;
        }
        void getdata(){
            cout<<"Code of this item is "<<id <<endl;
            cout<<"Price of the item is "<<price<<endl;
        }
};
int main(){
    int size=3;
    // general store
    // veggies
    // hardware
    Shop *ptr = new Shop[size];
    Shop *ptrTemp =ptr;
    int p;
    float q;
    for (int i=0; i<size ;i++)
    {
        cout<<"Id and price of item  "<<i+1<<endl;
        cin>>p>>q;
        //ptr->setdata(p,q);
        (*ptr).setdata(p,q);
        ptr++;

    }

    for (int j=0; j<size ; j++){
        cout<<"Item number : "<<j+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    return 0;
}