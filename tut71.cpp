#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> vec){
    for(int i=0 ; i< vec.size() ; i++){
        cout<<vec[i]<<endl;
    }
}
int main(){
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for(int i=0 ; i<size ; i++){
        cout<<"Enter" <<i+1<<" element of vector"<<endl;
        cin>>element;
        vec1.push_back(element);


        }
    
   
    
    vector<int> :: iterator inde = vec1.begin();
    vec1.insert(inde,100);
    
    display(vec1);
    cout<<"the max number in vec1 is "<<vec1.at(0);
    cout<<"size of vector "<<vec1.size();
    return 0;
}