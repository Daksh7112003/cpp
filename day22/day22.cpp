

#include <iostream>
using namespace std ;


    class complex{

        int a , b ;
        public:

        complex(void);

            void printNumber()



    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }



    };



    complex:: complex(void){
        
        a =10;
        b= 7;

    }



    int main(){


        complex c1 , c2 ;


        c1.printNumber();

        c2.printNumber();


        return 0;
        

    

     




}