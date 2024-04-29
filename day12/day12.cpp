# include <iostream>
using namespace std;



// int sum(int a, b)    //   Not applicable in C++....

// we have to proper define the datatype in the context..

// int sum(int , int)  // Acceptable ...... in C++.......









int sum(int a,int b){  /// acceptable 

    int c = a+b ;
    return c ;


}

int main(){

    int num1 , num2 ;


    cout<<"Enter the number 1 "<<endl;


    cin>>num1;


    cout<<"Enter the number 2 "<<endl;

    cin>>num2;


    cout<<"The sum of num1  and num2  is "<<sum(num1,num2)<<endl;





    
  
}