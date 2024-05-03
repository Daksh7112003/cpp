#include<iostream>
using namespace std;


class bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;


    public:

    bankdeposit(){}

    bankdeposit(int p,int y , float r );
    bankdeposit(int p , int y , int r );


    void show();


};



void bankdeposit::show(){

    cout<<"the return value of the  "<<years<<"year is "<< returnValue;



}




 bankdeposit::bankdeposit(int p , int y , float r ){
    principal = p ; 
    years = y ;
     interestRate = r ;
     returnValue= principal;



     for(int i =0 ; i<y ;i++){
        returnValue=returnValue*(1+interestRate);

     }

 }



 bankdeposit::bankdeposit(int p , int y , int r ){

    principal =   p ; 
    years= y ;
    interestRate =float(r)/100 ; 
    returnValue = principal;
       


       for(int i = 0  ; i  <  y  ; i++){

        returnValue = returnValue*(1+interestRate);




       }
 }

 int main(){

    bankdeposit bd1 , bd2 ;
    int p , y ;
     float r  ; 


     int R;



     cin>>p>>y>>r;


    bd1 =  bankdeposit(p,y,r);

    

    bd1.show();




     



return  0 ;


    
 }
