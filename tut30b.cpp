#include<iostream>
#include<cmath>
using namespace std;
class Point {
    int x,y;
    public :
        Point(int a , int b){
            x=a;
            y=b;

        }
        friend  distance(Point , Point);
        void displayPoint()
        {
            cout << " the point is ("<<x<<" , "<<y<<")"<<endl;
        }
};
int distance( Point t , Point s){
    float d;
    d=sqrt(pow(t.x-s.x,2)+pow(t.y-s.y,2));
    return d;
}


//Create a function (hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points
int main(){
    float sum;
    Point p(1,1);
    p.displayPoint();
    Point q(4,6);
    q.displayPoint();
    sum =distance(p,q);
    cout<<"the distance is "<< sum;

    return 0;
}