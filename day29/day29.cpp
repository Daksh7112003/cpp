#include <iostream>

using namespace std ;


class Base1{
    protected:
    int base1int;


    public: 
    void get_base1int(int a ){
        base1int=a;

    }

};



class Base2{
    protected:

    int base2int;


    public:

    void get_base2int(int a ){

        base2int=a ;

    }

};


class Derived: public Base1 , public Base2{

    public:

    void show(){

    

    cout<<"The value of base 1 is "<<base1int<<endl;




    cout<<"The value of base 2 is "<<base2int<<endl;



    cout<<"The sum of base 1 and base 2 is "<<base1int +base2int<<endl;







    }


};











int main(){


    Derived daksh;


    daksh.get_base1int(25);

    daksh.get_base2int(5);


    daksh.show();






    return  0 ; 

}

