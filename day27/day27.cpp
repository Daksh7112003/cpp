#include<iostream>
using namespace std ;










class base{

    protected:

    int a ;


    public:

    int d ; 





    

};



class derived:protected base{





};





int main(){

    base b ;
    derived d;
    // cout<<d.a; //// note this will not work here..... as its protected so you cant access that class member ....
    









    


    return  0 ; 

}