#include <iostream>
using namespace std;

int main(){

    // to build a arry ....
    int marks[]={11,22,33};
    for(int i= 0 ; i<3;i++){
        cout<<marks[i]<<endl;

    }


// for the pointers in the array
   int * p =marks;





    cout<<"the value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is"<<*(p+1)<<endl;

    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
     return 0;



}