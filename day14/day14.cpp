//Call by reference ...


#include <iostream>

using namespace std;



// CALL BY REFERENCE VARIABLE .....


int main(){

    int a , b ;
    cin>>a>>b;

    swap(a,b);


    cout<<"The value of a  is "<<a<<endl;
    cout<<"The value of a  is "<<b<<endl;
 


    return 0 ;

}

void swap(int&x,int&y){

    int temp;
    temp =x ;
    x = y;
    y= temp;


}
