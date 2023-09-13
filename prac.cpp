#include<iostream>
using namespace std;
class Polygon{
    int a,b,c;
    public:
        int area(int,int);
        void display(void);

};
int Polygon :: area (int x,int y){
    c=x*y;
}
void Polygon :: display(void){
    cout<<"the area of square is  "<<c<<endl;
}
int main(){
    Polygon square;
    square.area(2,4);
    square.display();
    return 0;
}