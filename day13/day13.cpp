# include <iostream>
using namespace std ;



// CALL BY VALUE ...  In this case, the swapping has not been performed , showing due to the compiler ....

int main(){

    int a =10 , b =20;

    swap(a,b);
    cout<<"The value of a is "<<a<<endl;




}

void swap(int x, int y ){

    int temp;
    temp=x;

    x=y;
    y= temp;

}