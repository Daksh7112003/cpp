#include<iostream>

using namespace std ;

class simple{

    int a, b;


    public:

    simple(int x,int y){

    a=x;
    b=y;


    }


    void printdata();


};


void simple:: printdata(){

    cout<<"the value of a and b is "<<"("<<a<<")"<<b<<endl;

}



int main(){




    simple s(1,4);

    s.printdata();

}
