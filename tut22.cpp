

    //OOPs -Classes and objects
    //class -->extension of structures
    //sturctures had limitations
    //  --> members are public
    //  --> no methods
    //classes -->  structures+ more
    //classes ---> can have methods and properties
    //classes ---> can make few members as private  and few as public
    //structures are in c++ are typedefed
    // you can declare objects along with th class declaration 
    /*class Employee {
        //class definition

    } harry ,rohan,lovish;*/
    //harry.salary=9; makes no sense if salary is private

//Nesting of member function
#include<iostream>
#include<string>
using namespace std;
    class binary {
        private:    //by default class members are private
            void chk_bin(void); // now only class methods can use chk_bin 
        string s;
    public:
        void read(void);
        //void chk_bin(void);             
        void ones_compliment(void);
        void display(void);

    };
    void binary ::read (void){
        cout<<"enter a binary number ";
        cin>>s;
    }
    void binary ::chk_bin(void){
        for(int i=0;i<s.length();i++){
            if (s.at(i)!='0' && s.at(i)!='1'){
                cout<<"incorrect"<<endl;
                exit(0);
            }
        }
    }
    void  binary :: ones_compliment(void){
        chk_bin();            // no need to write b.chk_bin(); it will run for same object as of ones compliment
        for(int i=0;i<s.length();i++){
            if (s.at(i)=='1'){
                s.at(i)='0';
            }
            else
            {
                s.at(i)='1';
            }
        }

    }
    void binary :: display(void){
        for(int i =0;i<s.length();i++){
            cout<<s.at(i);
        }
    }
int main(){
    binary b;
    b.read();
    //b.chk_bin();     //it can run in another way too        ,,,,will not run as it declared in private function
    b.ones_compliment();
    b.display();
    return 0;
}