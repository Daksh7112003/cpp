#include<iostream>


// typecasting


using namespace std;
int main(){
    int a = 45 ;
    float b  =  45.56;


    cout<<"The value of b is "<<float(a)<<endl;

cout<<"The value of b is "<<(float)a<<endl;

cout<<"The expression is "<<a + b<<endl;

cout<<"The expression is "<<a + int(b)<<endl;

cout<<"The expression is "<<a + (int)(b)<<endl;
return 0 ; 
}