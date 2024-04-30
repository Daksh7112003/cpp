#include <iostream>

using namespace std ;
class employee{
    private:

    int a ,  b , c ;

    public:

    int d , e ;

    //declaration......

   void setdata(int a1 , int b1 , int c1);

    void getdata(){
cout<<"The value of a is "<<a<<endl;

cout<<"The value of b is "<<b<<endl;

cout<<"The value of c is "<<c<<endl;

cout<<"The value of d is "<<d<<endl;

cout<<"The value of e is "<<e<<endl;



        
    }











};








void employee::setdata(int a1 , int b1 , int c1){

    a=a1;
    b=b1;
    c=c1;


}













int main(){

    employee daksh;

    daksh.d=456;

    daksh.e=7766;


    daksh.setdata(566,8895,73563);
    daksh.getdata();
    








    

    return 0;

}