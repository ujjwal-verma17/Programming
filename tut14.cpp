#include <iostream>
using namespace std;
//structure ,union and enums
typedef struct employee      // if data have different data types like ...int,char,float wecan do it in array
{
    /* data */
    int eId;
    char favChar;
    float salary;

} ep;
// struct employee      // if data have different data types like ...int,char,float wecan do it in array
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;

// };
union money      // UNION     takes maximum size of memory and allot one at a time 
{
    /* data */
    int rice;
    char car;
    float pounds;

};

int main(){
    ep harry;
    ep shubham;
    ep ujjwal;
    // struct employee harry; if we are not using typedef  and instead of struct employee we can use ep
    // struct employee shubham;
    // struct employee ujjwal;
    union money m1;
    m1.rice=34;
    m1.car='r';
    cout<<"union results are  "<<m1.rice<<endl;
    ujjwal.salary=80000;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=12000;
    cout<<"the value is  id is  "<<harry.eId<<endl;
    cout<<"the value is char  "<<harry.favChar<<endl;
    cout<<"the value is  salary  "<<harry.salary<<endl;
    cout<<"the value is  salary  "<<ujjwal.salary<<endl;
    cout<<"the value is  salary  "<<ujjwal.eId<<endl;


    return 0;
}